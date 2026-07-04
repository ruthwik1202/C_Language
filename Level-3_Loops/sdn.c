#include <stdio.h>
int main() {
int num,digit,smallest=9;
printf("Enter Number: ");
scanf("%d", &num);
while(num!=0) {
digit = num%10;
if(digit<smallest) {
smallest=digit;
num = num/10;
}
printf("smallest Digit: %d", smallest);
}
return 0;
}