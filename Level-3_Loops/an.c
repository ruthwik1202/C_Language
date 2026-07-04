#include <stdio.h>

int main()
{
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    if(square % 10 == num % 10)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}