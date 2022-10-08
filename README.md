
<!-- README.md is generated from README.Rmd. Please edit that file -->

# rxode2random

<!-- badges: start -->

[![R build
status](https://github.com/nlmixr2/rxode2random/workflows/R-CMD-check/badge.svg)](https://github.com/nlmixr2/rxode2random/actions)
[![codecov.io](https://codecov.io/github/nlmixr2/rxode2random/coverage.svg)](https://codecov.io/github/nlmixr2/rxode2random)
[![CRAN
version](http://www.r-pkg.org/badges/version/rxode2random)](https://cran.r-project.org/package=rxode2random)
[![CRAN total
downloads](https://cranlogs.r-pkg.org/badges/grand-total/rxode2random)](https://cran.r-project.org/package=rxode2random)
[![CRAN total
downloads](https://cranlogs.r-pkg.org/badges/rxode2random)](https://cran.r-project.org/package=rxode2random)

[![CodeFactor](https://www.codefactor.io/repository/github/nlmixr2/rxode2random/badge)](https://www.codefactor.io/repository/github/nlmixr2/rxode2random)
<!-- badges: end -->

The goal of rxode2random is to split off the ‘rxode2’ random number
generation from the ode solving and C compilation of models. \#\#
Installation

You can install the development version of rxode2random from
[GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("nlmixr2/rxode2random")
```

## Examples

This is mostly about random number generation so you can select a matrix
from `cvPost()`

``` r
library(rxode2random)
cvPost(10, lotri::lotri(a+b~c(1,0.5,1)), n=3)
#> [[1]]
#>          a        b
#> a 1.961675 1.594139
#> b 1.594139 2.124261
#> 
#> [[2]]
#>          a        b
#> a 4.742619 2.888424
#> b 2.888424 2.342835
#> 
#> [[3]]
#>           a         b
#> a 0.9629715 0.3815303
#> b 0.3815303 0.5152573
```
