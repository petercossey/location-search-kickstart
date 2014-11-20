Location Search Kickstart
=========================

A Drupal installation profile to demonstrate location search using Search API
Location.

This was originally presented at the Sydney Drupal User Group, there are some
companion slides here: http://bit.ly/location-search-kickstart

To build the profile, run:

drush make build-location-search-kickstart.make /path/to/wwwroot

This will assemble a copy of Drupal core with the latest copy of the profile
files from Git, along with all of its dependencies.

There are two other .make files, which are called from the "build" one:

- drupal-org-core.make:
  This file just contains the definition for how to package Drupal core.

- drupal-org.make:
  This file is where the bulk of the work happens; contributed modules/themes,
  external libraries, non-core patches, etc. are all handled here.

See http://drupal.org/developing/distributions for the longer version of these
instructions. :)
