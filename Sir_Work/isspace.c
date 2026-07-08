#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(isspace(ch))
printf("It is a White Space");
else
printf("It is Not White Space");
return 0;
}