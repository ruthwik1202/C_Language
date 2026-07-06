#include <stdio.h>
int add(int a, int b);
int main() {
int x,y;
printf("Enter Two Numbers: ");
scanf("%d%d", &x,&y);
add(x,y);
return 0;
}
int add(int a, int b) {
printf("Sum = %d", a+b);
}