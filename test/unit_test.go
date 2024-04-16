package test

import (
	"github.com/XayahSuSuSu/geographiclib-go/geographiclib"
	"testing"
)

func Test(t *testing.T) {
	var lat, lon, h, x, y, z float64
	lat = 50.9
	lon = 1.8
	h = 0

	// Forward
	test := geographiclib.NewLocalCartesian()
	test.Forward(lat, lon, h, &x, &y, &z)
	t.Log(lat, lon, h, x, y, z)

	var rLat, rLon, rH float64
	// Reverse
	test.Reverse(x, y, z, &rLat, &rLon, &rH)
	t.Log(rLat, rLon, rH, x, y, z)
}
