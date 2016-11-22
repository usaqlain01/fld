# this requires the Acquia drush aliases https://docs.acquia.com/cloud/drush-aliases
# and jq http://brewformulas.org/Jq        https://stedolan.github.io/jq/download/



#kick off db pull down
DBCOPY_ID="$(drush @fldmuse.prod ac-database-copy fldmuse test --format=json | jq -r '.id')"
#and live dev enable
LIVEDEV_ID="$(drush @fldmuse.test ac-environment-livedev enable 1 --format=json | jq -r '.id')"

#get who's coming into arr
echo "Please type the usernames of the people coming to web training separated by spaces"
echo "e.g. gtroyerjoy swigodner bdunn jnallie"
read -a PEOPLE

echo "Gonna wait 2 minutes. Acquia needs time to think about that database."
sleep 120s

echo "Checking on DB copy and Live dev status with Acquia..."

DBCOPY_STATUS="blat"
LIVEDEV_STATUS="blat"

while [ "$DBCOPY_STATUS" != "done" -o "$LIVEDEV_STATUS" != "done" ]; do

	if [ "$DBCOPY_STATUS" != "blat" ]; then
		sleep 10s
		echo "checking..."
	fi

	DBCOPY_STATUS="$(drush @fldmuse.test ac-task-info $DBCOPY_ID --format=json | jq -r '.state')"
	LIVEDEV_STATUS="$(drush @fldmuse.test ac-task-info $LIVEDEV_ID --format=json | jq -r '.state')"

	echo "DB copy status: $DBCOPY_STATUS"
	echo "Live dev status: $LIVEDEV_STATUS"

	if [ "$DBCOPY_STATUS" == "error" -o "$LIVEDEV_STATUS" == "error" ]; then
		exit 1
	fi

done

#set http password
ssh fldmuse.test@staging-18807.prod.hosting.acquia.com "sed -i 's/carlakeley/test/g' ~/test/livedev/docroot/sites/default/settings.php; sed -i 's/theanimalsarestillstuffed/test/g' ~/test/livedev/docroot/sites/default/settings.php"

#disable redirects
drush @fldmuse.prod dis domain_301_redirect securelogin -y



PEOPLE+=("swigodner")

for i in ${PEOPLE[@]}
do
   echo $i # or do whatever with individual element of the array

   #create users where they don't already exist
   drush @fldmuse.test user-create $i

   #set PW to test
   drush @fldmuse.test user-password $i --password="test"

   #remove admin
   drush @fldmuse.test user-remove-role administrator $i

   #add appropriate roles
   drush @fldmuse.test user-add-role author $i
   drush @fldmuse.test user-add-role reviewer $i
   drush @fldmuse.test user-add-role publisher $i
done

echo "done!"


