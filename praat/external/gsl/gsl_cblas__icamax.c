#include "gsl_math.h"
#include "gsl_cblas.h"
#include "gsl_cblas__cblas.h"

CBLAS_INDEX
cblas_icamax (const int N, const void *X, const int incX)
{
#define BASE float
#include "gsl_cblas__source_iamax_c.h"
#undef BASE
}
