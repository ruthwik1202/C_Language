#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    bill = units * 5.50;

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}