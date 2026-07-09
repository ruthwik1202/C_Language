#include <stdio.h>

int countDigits(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of Digits = %d", countDigits(n));

    return 0;
}

int countDigits(int n)
{
    int count = 0;

    while(n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}