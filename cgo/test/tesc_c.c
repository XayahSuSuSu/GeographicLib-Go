#include "stdio.h"
#include "../wrapper.h"

int main() {
    double lat = 50.9, lon = 1.8, h = 0; // Calais
    double x, y, z;
    LocalCartesianRef r = NewLocalCartesian();
    Forward(r, lat, lon, h, &x, &y, &z);
    printf("%f,%f,%f", x, y, z);
    return 0;
}
