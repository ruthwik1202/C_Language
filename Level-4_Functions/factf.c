#include <stdio.h>
int factorial(int n);
int main() {
int n;
printf("Enter a Number: ");
scanf("%d", &n);
printf("Factorial: %d",factorial(n));
return 0;
}
int factorial(int n) {
int i,fact;
for(i=1; i<=n; i++)
fact*=i;
return fact;
}