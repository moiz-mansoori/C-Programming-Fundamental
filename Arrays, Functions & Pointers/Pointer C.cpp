#include <stdio.h>

int main() {
double salary = 25.60;
double* ptr = &salary;
printf("Salary is : %.2lf", *ptr);
double Newsalary = *ptr * 2;
printf("\nNew salary = %.2lf", Newsalary);
    return 0;
}
