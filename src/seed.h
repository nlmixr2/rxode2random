#ifndef __SEED_H__
#define __SEED_H__
#include "../inst/include/rxode2random.h"

#if defined(__cplusplus)
uint32_t getRxSeed1(int ncores);
extern "C" {
#endif
  SEXP _rxSetSeed(SEXP intIn);
#if defined(__cplusplus)
}
#endif

#endif // __SEED_H__
