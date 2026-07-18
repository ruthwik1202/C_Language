#include <stdio.h>
int main() {
int a[5],i;
printf("Enter 5 Elements: \n");
for(i=0; i<5; i++)
scanf("%d",&a[i]);
printf("Array Elements are: \n");
for(i=0; i<5; i++)
printf("%d\t",a[i]);
return 0;
}