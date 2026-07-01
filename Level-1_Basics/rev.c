#include <stdio.h>

int main()
{
    int num, rev;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    printf("Reversed Number = %d", rev);

    return 0;
}