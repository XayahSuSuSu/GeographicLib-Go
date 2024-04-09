#include "GeographicLib/LocalCartesian.hpp"

int main() {
    GeographicLib::LocalCartesian proj;
    double lat = 50.9, lon = 1.8, h = 0; // Calais
    double x, y, z;
    proj.Forward(lat, lon, h, x, y, z);
    printf("%f,%f,%f", x, y, z);
    return 0;
}
