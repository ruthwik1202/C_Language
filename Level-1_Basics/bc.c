#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}