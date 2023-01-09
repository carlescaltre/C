/* Este programa recibe la latitud, longitud e información de un GPS en un formato y devuelve la misma información en formato JSON*/
#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info)) {
        if (started)
            printf(",\n");
        else
            started = 1;
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
 
}