#include <stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if(ispunct(ch))
printf("%c is an Punctuation Symbol",ch);
else
printf("%c is Not a Punctuation Symbol",ch);
return 0;
}