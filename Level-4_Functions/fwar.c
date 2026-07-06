#include <stdio.h>
int multiply(int a, int b);
int main() {
int x,y;
printf("Enter Two Numbers: ");
scanf("%d%d",&x,&y);
printf("Product = %d",multiply(x,y));
return 0;
}
int multiply(int a, int b) {
return a*b;
}