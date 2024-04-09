package test

import (
	"github.com/XayahSuSuSu/geographiclib-go"
	"testing"
)

func Test(t *testing.T) {
	var lat, lon, h, x, y, z float64
	lat = 50.9
	lon = 1.8
	h = 0
	test := geographiclib.NewLocalCartesian()
	test.Forward(lat, lon, h, &x, &y, &z)
	t.Log(lat, lon, h, x, y, z)
}
