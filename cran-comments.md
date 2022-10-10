    Please add \value to .Rd files regarding exported methods and explain
    the functions results in the documentation. Please write about the
    structure of the output (class) and also what the output means. (If a
    function does not return a value, please document that too, e.g.
    \value{No return value, called for side effects} or similar)
    Missing Rd-tags:
      rxSeedEng.Rd: \value

Fixed, used "Nothing, called for side effects"

    Please do not modifiy the .GlobalEnv (and the .Random.seed). This is not
    allowed by the CRAN policies.
    
The `.Random.seed` is not modified except by sampling from the random
number generator to seed the parallel compatible random seed.

The modification of `.Random.seed` by the above method is even stopped when the `rxSetSeed()` is used.

This binary is used for parallel random number generation which is not
supported by R's internal random number generation routines.  It uses
the `sitmo` package.  This allows the parallel ODE solving and random
number generation used by `rxode2`.

The `.Random.seed` is preserved in the following special
circumstances: when calling `rxWithSeed` and `rxWithPreserveSeed`
which shows a `globalenv()` in the code as well as a `.Random.seed` in
the code; This is very similar to the code in `withr`.  In addition
the parallel seed (if set) is preserved as well.  If it is not set, the 
R random number generator is used to set parallel simulation seed.

It is preferred that the user sets the seed, otherwise the birthday problem
may occur for the simulation (https://www.johndcook.com/blog/2016/01/29/random-number-generator-seed-mistakes/).

    Please always add all authors, contributors and copyright holders in the
    Authors@R field with the appropriate roles.
    
    From CRAN policies you agreed to:
    
    "The ownership of copyright and intellectual property rights of all
    components of the package must be clear and unambiguous (including from
    the authors specification in the DESCRIPTION file). Where code is copied
    (or derived) from the work of others (including from R itself), care
    must be taken that any copyright/license statements are preserved and
    authorship is not misrepresented.
    Preferably, an ‘Authors@R’ would be used with ‘ctb’ roles for the
    authors of such code. Alternatively, the ‘Author’ field should list
    these authors as contributors. Where copyrights are held by an entity
    other than the package authors, this should preferably be indicated via
    ‘cph’ roles in the ‘Authors@R’ field, or using a ‘Copyright’ field (if
    necessary referring to an inst/COPYRIGHTS file)." e.g.: You don't
    mention the authors of "fast_factor.cpp" in your Description.
    Please explain in the submission comments what you did about this issue.
    
Thank you for the catch.  I thought I transferred the correct authors
for this package, but overlooked these two.  I have added them to the
contributors.  I also added to the header that I modified their code
as well.

Thank you again for pointing this out.


## R CMD check results

0 errors | 0 warnings | 1 note

* This package splits off the random number generation from 'rxode2'
  to reduce its compilation time (as requested by Prof Brian Ripley).

* This is a new release.
