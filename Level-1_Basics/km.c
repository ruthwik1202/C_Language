#include <stdio.h>

int main()
{
    float km, meter;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meter = km * 1000;

    printf("Distance in meters = %.2f", meter);

    return 0;
}