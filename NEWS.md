# rxode2random 2.0.10

- Moved fast factor to `rxode2parse` to allow `etTrans` to be moved there

# rxode2random 2.0.9

* Initial release of `rxode2random`, which separates the parallel
  safe, random number generation from 'rxode2' into a separate package to
  reduce 'rxode2' compilation time. This should make CRAN maintenance 
  a bit easier.

* Added a `NEWS.md` file to track changes to the package.
