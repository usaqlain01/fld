FMNH Staff feature
==================

Feed Importer
-------------

Override Profile
----------------

Each user has an override profile that can only be edited by users whose role allows the
`Override: Edit [own|any] profile` permission. All users can *view* their own override profile when they
visit their user profile page (`/user` path, not their staff profile). Currently only site administrators
have permission to edit this profile.

The values in the override profile take precedence over any imported values from the human resources
department CSV file. As a result of this feature, the import process takes slightly more time as it
considers every record to be potentially updateable so it can check for values in the
override profile.
