#include "wrapper.h"
#include "GeographicLib/LocalCartesian.hpp"

#ifdef __cplusplus
extern "C" {
#endif

struct LocalCartesian4C {
    GeographicLib::LocalCartesian *p;
};

LocalCartesianRef NewLocalCartesian() {
    auto r = (LocalCartesianRef) malloc(sizeof(struct LocalCartesian4C));
    r->p = new GeographicLib::LocalCartesian();
    return r;
}

void Reset(LocalCartesianRef r, real lat0, real lon0, real h0) {
    r->p->Reset(lat0, lon0, h0);
}

void Forward(LocalCartesianRef r, real lat, real lon, real h, const real *x, const real *y, const real *z) {
    r->p->Forward(lat, lon, h, (real &) *x, (real &) *y, (real &) *z);
}

void Reverse(LocalCartesianRef r, real x, real y, real z, const real *lat, const real *lon, const real *h) {
    r->p->Reverse(x, y, z, (real &) *lat, (real &) *lon, (real &) *h);
}

#ifdef __cplusplus
}
#endif
