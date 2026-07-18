#include <stdio.h>
int main() {
int a[5],i,key;
printf("Enter 5 Elements: \n");
for(i=0; i<5; i++)
scanf("%d",&a[i]);
printf("Enter Element to search: ");
scanf("%d",&key);
for(i=0; i<5; i++) {
if(a[i]==key) {
printf("Element Found at Position %d",i+1);
return 0;
}
}
printf("Element Not Found");
return 0;
}