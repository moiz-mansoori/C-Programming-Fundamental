//  Task 01: Using scanf() and printf(),Create a program with the help of format specifiers to print your marks that include:
//  Marks of Subject 1 Grad of Subject 1
//  Marks of Subject 2 Grad of Subject 2
//  Marks of Subject 3 Grad of Subject 3 

//#include <stdio.h>
//
//int main() {
//    
//    int marks1, marks2, marks3;
//    char grade1, grade2, grade3;
//    
//    printf("Enter marks for Subject 1: ");
//    scanf("%d", &marks1);
//    printf("Enter grade for Subject 1: ");
//    scanf(" %c", &grade1); 
//    
//    
//    printf("Enter marks for Subject 2: ");
//    scanf("%d", &marks2);
//    printf("Enter grade for Subject 2: ");
//    scanf(" %c", &grade2);
//    
//    
//    printf("Enter marks for Subject 3: ");
//    scanf("%d", &marks3);
//    printf("Enter grade for Subject 3: ");
//    scanf(" %c", &grade3);
//    
//    printf("\nMarks of Subject 1: %d\tGrade of Subject 1: %c\n", marks1, grade1);
//    printf("Marks of Subject 2: %d\tGrade of Subject 2: %c\n", marks2, grade2);
//    printf("Marks of Subject 3: %d\tGrade of Subject 3: %c\n", marks3, grade3);
//    
//    return 0;
//}










// Task02: Using scanf() and printf()Create a program that has the following output: (the price should be taken as input from the user)

// Price of one page:	4.75 Rs
// Price of 15 pages:	71.25 Rs
// Price after discount:	60.00 Rs

//#include <stdio.h>
//
//int main() {
//    float pricePerPage, totalPrice, discountedPrice;
//    int pageCount = 15;
//    
//    printf("Enter the price of one page: ");
//    scanf("%f", &pricePerPage);
//    
//    totalPrice = pricePerPage * pageCount;
//    discountedPrice = totalPrice -11.25;  // Assuming a discount of 15%
//    
//    printf("\nPrice of one page: \t%.2f Rs\n", pricePerPage);
//    printf("Price of %d pages: \t%.2f Rs\n", pageCount, totalPrice);
//    printf("Price after discount: \t%.2f Rs\n", discountedPrice);
//    
//    return 0;
//}









// Task:03-  Write a program that can print a table of 6, using scape sequence.

//#include <stdio.h>
//
//int main() {
//	
//	printf("\t\t Table of 6\n");
//	printf("------------------------------\n");
//	
//	printf("|\t Number |\t Multiplication \n");
//	printf("-------------------------------\n");
//	
//	for(int i=1; i<=10; i++ ){
//		
//		printf("|\t%d\t|\t%d\t\t|\n", i, i * 6);
//		printf("----------------------------\n");
//		
//	}
//
//	return 0;
//}



//Task 04: Using scanf() and Constant, create a program who takes an input which is radius of circle and calculate area of it.
//Area of Circle ?? = ????2 where ?? is constant (3.1415)

//#include <stdio.h>
//
//#define PI 3.1415
//
//int main() {
//    float radius;
//    float area;
//
//    printf("Enter the radius of the circle: ");
//    scanf("%f", &radius);
//
//    area = PI * radius * radius;
//
//    printf("The area of the circle is: %f\n", area);
//
//    return 0;
//}




//Task 05: Create a program that takes a decimal number from user and displays the whole number part and fraction part of the number separately. The output screen should be as shown below:
//#include <stdio.h>
//
//int main() {
//    double number;
//    int wholePart;
//    double fractionPart;
//    
//    printf("Enter a decimal number: ");
//    scanf("%lf", &number);
//    wholePart = (int)number;
//    
//  
//    fractionPart = number - wholePart;
//    
//    printf("Whole number part: %d\n", wholePart);
//    printf("Fraction part: %.2f\n", fractionPart);
//    
//    return 0;
//}
