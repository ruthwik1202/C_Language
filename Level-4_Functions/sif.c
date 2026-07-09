#include <stdio.h>
float simpleInterest(float p, float r, float t);
int main()
{
    float p, r, t;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f%f%f", &p, &r, &t);
    printf("Simple Interest = %.2f", simpleInterest(p, r, t));
    return 0;
}

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}