//Write a C program that defines a structure named Person with two members: age (integer) and salary (double). In the main function, declare two variables of type Person named person1 and person2. 
//Initialize the values of person1 with age 28 and salary 5456.45, and person2 with age 31 and salary 2345.55. Print the age and salary of both persons

//#include <stdio.h>
//
//int main(){
//	struct Person {
//	double salary;
//	int age;
//	};
//	
// struct Person person1;
// struct Person person2;
// 
// person1.age= 28;
// person1.salary= 5456.45;
// 
// printf("Age of person1: %d\n", person1.age);
// printf("Salary of person1: %.2lf", person1.salary);
//	
//	
//	person2.age= 31;
//	person2.salary=2345.55;
//	
//	printf("Age of person2: %d\n", person2.age);
//	printf("Salary of person2: %.2lf", person2.salary);
//	
//	
//	
//	return 0;
//}




//Write a C program that defines a structure named complex to represent a complex number with real and imaginary parts. In the main function, declare three complex numbers c1, c2, and c3 with the given real and imaginary values. 
//Calculate the subtraction of these three complex numbers and store the result in a variable named sub. Finally, print the result in the form real - imaginaryi.

#include <stdio.h>
 typedef struct Person {
	double real;
	double imagine;
	}complex;
int main(){
    complex c1 = {.real =21.45 , .imagine=34.56};
    complex c2 = {.real = 12.34 , .imagine = 33.56};
    complex c3 = {.real = 15.55 , .imagine = 43.56};
    
    complex sub;
    sub .real= c1.real - c2.real - c3.real;
    sub.imagine= c1.imagine - c2.imagine - c3.imagine;
    
    printf("Sub of complex is: %.2lf - %.2lfi", sub.real , sub.imagine);
 

	
	return 0;
}
