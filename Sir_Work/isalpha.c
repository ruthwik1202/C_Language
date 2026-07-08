#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(isalpha(ch))
printf("%c is an Alphabet",ch);
else
printf("%c is Not an Alphabet",ch);
return 0;
}