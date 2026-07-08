#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(isupper(ch))
printf("%c is an Uppercase",ch);
else
printf("%c is Not Uppercase",ch);
return 0;
}