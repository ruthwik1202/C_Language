#include <stdio.h>
int maximum(int a, int b);
int main() {
int a,b;
printf("Enter Two Numbers: ");
scanf("%d%d", &a,&b);
printf("Largest Number: %d",maximum(a,b));
return 0;
}
int maximum(int a, int b) {
if(a>b)
return a;
else
return b;
}