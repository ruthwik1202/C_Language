#include <stdio.h>

int main()
{
    float basic, hra, da, pf, netSalary;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    pf = basic * 0.08;

    netSalary = basic + hra + da - pf;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("PF = %.2f\n", pf);
    printf("Net Salary = %.2f", netSalary);

    return 0;
}