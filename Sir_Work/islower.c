#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(islower(ch))
printf("%c is Lowercase",ch);
else
printf("%c is Not a Lowercase",ch);
return 0;
}