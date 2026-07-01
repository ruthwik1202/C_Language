#include <stdio.h>

int main()
{
    int num, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    sum = (num / 100) + ((num / 10) % 10) + (num % 10);

    printf("Sum of Digits = %d", sum);

    return 0;
}