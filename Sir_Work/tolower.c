#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c",&ch);
    printf("Lowercase = %c", tolower(ch));
    return 0;
}