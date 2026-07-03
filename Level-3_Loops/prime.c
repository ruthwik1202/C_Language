#include <stdio.h>
int main() {
int n,i,flag=0;
printf("Enter Number: ");
scanf("%d",&n);
for(i=2; i<=n/2; i++) {
if(n%i==0) {
flag=1;
break;
}
}
if(flag==1 && n>1)
printf("Prime Number");
else
printf("Not Prime");
return 0;
}
