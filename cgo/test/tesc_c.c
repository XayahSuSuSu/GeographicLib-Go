#include "stdio.h"
#include "../wrapper.h"

int main() {
    double lat = 50.9, lon = 1.8, h = 0; // Calais
    double x, y, z;
    LocalCartesianRef r = NewLocalCartesian();

    // Forward
    Forward(r, lat, lon, h, &x, &y, &z);
    printf("%f,%f,%f\n", x, y, z);

    // Reverse
    double r_lat, r_lon, r_h; // Calais
    Reverse(r, x, y, z, &r_lat, &r_lon, &r_h);
    printf("%f,%f,%f\n", r_lat, r_lon, r_h);
    return 0;
}
