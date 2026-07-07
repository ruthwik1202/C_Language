#include <stdio.h>
void check(int n);
int main() {
int n;
printf("Enter a Number: ");
scanf("%d", &n);
check(n);
return 0;
}
void check(int n) {
if(n % 2 ==  0)
printf("Even");
else
printf("Odd");
}