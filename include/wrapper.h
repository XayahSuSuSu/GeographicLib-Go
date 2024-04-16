#ifndef CGO_WRAPPER_H
#define CGO_WRAPPER_H

#ifdef __cplusplus

extern "C" {
#endif

typedef double real;
struct LocalCartesian4C;
typedef struct LocalCartesian4C *LocalCartesianRef;

LocalCartesianRef NewLocalCartesian();

void Reset(LocalCartesianRef r, real lat0, real lon0, real h0);

void Forward(LocalCartesianRef r, real lat, real lon, real h, const real *x, const real *y, const real *z);

void Reverse(LocalCartesianRef r, real x, real y, real z, const real *lat, const real *lon, const real *h);

#ifdef __cplusplus
}
#endif

#endif //CGO_WRAPPER_H
