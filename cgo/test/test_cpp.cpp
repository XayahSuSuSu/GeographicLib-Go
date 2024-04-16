#include "GeographicLib/LocalCartesian.hpp"

int main() {
    GeographicLib::LocalCartesian proj;

    // Forward
    double lat = 50.9, lon = 1.8, h = 0; // Calais
    double x, y, z;
    proj.Forward(lat, lon, h, x, y, z);
    printf("%f,%f,%f\n", x, y, z);

    // Reverse
    double r_lat, r_lon, r_h; // Calais
    proj.Reverse(x, y, z, r_lat, r_lon, r_h);
    printf("%f,%f,%f\n", r_lat, r_lon, r_h);
    return 0;
}
