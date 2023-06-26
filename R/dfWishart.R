dfWishartCalcRse <- function(nu, omega, totN, rse) {
  .cv <- cvPost(nu, omega, totN)
  max(omegaListRse(.cv)$rse)-rse
}

dfWishart <- function(omega, n, rse, totN=10000) {
  checkmate::assertMatrix(omega, "numeric", min.rows=1, min.cols=1)
  checkmate::assertIntegerish(n, len=1, lower=1)
  checkmate::assertIntegerish(totN, len=1, lower=1)
  if (missing(rse)) {
    rse <- sqrt(2)/sqrt(n)
  }
  .d <-  dim(omega)
  if (.d[1] != .d[2]) {
    stop("omega must be a square matrix",
         call.=FALSE)
  }
  # nu-p-3 > 0 so min for nu is
  .lower <- .d[1] + 3.1
  .upper <-  n*200
  uniroot(dfWishartCalcRse, lower=.lower, upper=.upper, omega=omega, totN=totN, rse=rse)
}
