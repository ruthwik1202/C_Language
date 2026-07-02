#include <stdio.h>
int main() {
int year;
printf("Enter the year: ");
scanf("%d", &year);
if(year % 400 == 0)
printf("Leap Year");
else
printf("Non-Leap Year");
return 0;
}
