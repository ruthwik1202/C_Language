#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(isdigit(ch))
printf("%c is Digit",ch);
else
printf("%c is Not Digit",ch);
return 0;
}