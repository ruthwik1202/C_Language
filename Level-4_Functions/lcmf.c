#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    lcm = (a * b) / gcd(a, b);
    printf("LCM = %d", lcm);
    return 0;
}
int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}