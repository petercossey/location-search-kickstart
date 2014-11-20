#!/bin/bash
rm -rf modules/contrib
drush make --no-gitinfofile --working-copy --no-core --contrib-destination=. location_search_kickstart.make .
# Usually run update.php and clear the cache here
