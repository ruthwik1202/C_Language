#include <stdio.h>
int main() {
int num,digit,largest=0;
printf("Enter Number: ");
scanf("%d", &num);
while(num!=0) {
digit = num%10;
if(digit>largest) {
largest=digit;
num = num/10;
}
printf("Largest Digit: %d", largest);
}
return 0;
}