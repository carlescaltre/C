/* Programa que simula un barco pirata*/

#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lon, int *lat) {

    *lon = *lon + 1;
    *lat = *lat - 1;
    
}

int main() {
    int latitude = 32;
    int longitude = -64;

    go_south_east(&longitude, &latitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}