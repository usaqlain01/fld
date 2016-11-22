# this requires the Acquia drush aliases https://docs.acquia.com/cloud/drush-aliases
# and jq http://brewformulas.org/Jq        https://stedolan.github.io/jq/download/




#turn off live dev
drush @fldmuse.test ac-environment-livedev disable 1 --format=json | jq -r '.id'

#kick off db pull down
DBCOPY_ID="$(drush @fldmuse.prod ac-database-copy fldmuse test --format=json | jq -r '.id')"

echo "Gonna wait 3 minutes. Acquia needs time to think about that database."
sleep 180s

echo "Checking on DB copy status with Acquia..."

DBCOPY_STATUS="blat"

while [ "$DBCOPY_STATUS" != "done" ]; do

	if [ "$DBCOPY_STATUS" != "blat" ]; then
		sleep 5s
		echo "checking..."
	fi

	DBCOPY_STATUS="$(drush @fldmuse.test ac-task-info $DBCOPY_ID --format=json | jq -r '.state')"

	echo "DB copy status: $DBCOPY_STATUS"

	if [ "$DBCOPY_STATUS" == "error" ]; then
		exit
	fi

done




drush @fldmuse.prod dis domain_301_redirect securelogin -y

echo "done!"

