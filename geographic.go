package geographiclib

/*
#cgo CFLAGS: -I${SRCDIR}/include
#cgo LDFLAGS: -L${SRCDIR}/lib/win64 -lgeowrapper
#include "../include/wrapper.h"
*/
import "C"

type LocalCartesian struct {
	p C.LocalCartesianRef
}

func NewLocalCartesian() LocalCartesian {
	return LocalCartesian{p: C.NewLocalCartesian()}
}

func (p LocalCartesian) Reset(lat0, lon0, h0 float64) {
	C.Reset(p.p, C.double(lat0), C.double(lon0), C.double(h0))
}

func (p LocalCartesian) Forward(lat, lon, h float64, x, y, z *float64) {
	C.Forward(p.p, (C.double)(lat), (C.double)(lon), (C.double)(h), (*C.double)(x), (*C.double)(y), (*C.double)(z))
}
