#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(isalnum(ch))
printf("%c is Alphanumeric",ch);
else
printf("%c is Not Alphanumeric",ch);
return 0;
}