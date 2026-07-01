#include <stdio.h>
int main() {
float a,b,c,avg;
printf("Enter the Three Numbers: ");
scanf("%f %f %f", &a,&b,&c);
avg = (a+b+c)/3;
printf("Average of Three Numbers: %.2f", avg);
return 0;
}