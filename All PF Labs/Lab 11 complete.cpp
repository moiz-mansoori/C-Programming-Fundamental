////Write a function to calculate the factorial value of any integer entered through the keyboard.  
//#include <stdio.h>
//
//int calculateFactorial(int num){
//	int factorial =1;
//	
//	if (num < 0){
//		printf("Factorial is not defined in negative number");
//		return -1;
//	}
//for(int i=1; i<=num; i++){
//		factorial *=i;
//}
//	return factorial;
//}
//int main(){
//	int num;
//	printf("Enter the integer: ");
//	scanf("%d", &num);
//	
//	int factorial = calculateFactorial(num);
//	
//if (factorial != -1) {
//        printf("Factorial of %d is %d\n", num, factorial);
//    }
//    return 0;
//}



//- Write a function power (a, b) to calculate the value of 'a' raised to the power of 'b'

//# include <stdio.h>
//int power(float a , int b){
//    float result =1.00;
//    
//    for(int i =1; i<=b; i++){
//        result *=a;
//    }
//    return result;
//}
//int main (){
//    float x;
//    int y;
//    
//    printf("Enter the value (a): ");
//    scanf("%f", &x);
//    
//    printf("Enter the value (b) : ");
//    scanf("%d", &y);
//    
//    double result = power(x , y);
//    printf("%.2f ^ %d = %.2f\n", x, y, result);
//    return 0;
//}




//Write a general-purpose function to convert any given year into its roman equivalent. The following table shows the roman equivalents of decimal numbers:  
//Decimal          Roman                 |              Decimal                Roman 
//1                  i    				|				500   					d	
//100                 c   				|				10   					x
//5                   v	                |          		1000					m 
//                                 						50     					l

//#include <stdio.h>
//
//void convertToRoman(int year) {
//    int m = 1000, d = 500, c = 100, l = 50, x = 10, v = 5, i = 1;
//
//    if (year > 0) {
//        while (year > 0) {
//            if (year >= m) {
//                printf("m");
//                year -= m;
//            } else if (year >= d) {
//                printf("d");
//                year -= d;
//            } else if (year >= c) {
//                printf("c");
//                year -= c;
//            } else if (year >= l) {
//                printf("l");
//                year -= l;
//            } else if (year >= x) {
//                printf("x");
//                year -= x;
//            } else if (year >= v) {
//                printf("v");
//                year -= v;
//            } else if (year >= i) {
//                printf("i");
//                year -= i;
//            }
//        }
//    } else {
//        printf("Negative Number is not valid; Please enter a positive number.");
//    }
//}
//
//int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);
//
//    printf("Roman Equivalent: ");
//    convertToRoman(year);
//
//    return 0;
//}






////- Write a function which receives a float and an int from main( ), 
////finds the product of these two and returns the product which is printed through main( )
//
#include <stdio.h>

void calculateSumAndAverage(int num[5], int *sum, float *average, float *deviat) {
 *sum=0;
  for (int i = 0; i < 5; i++) {
        num[i] += i;
        *sum += num[i];
		}
    *average = (float)(*sum) / 5;
//    *deviate =0;
     for (int i = 0; i < 5; i++){\
      *deviate = (num[i]- *average) * (num[i]- *average);
      *deviate = sqrt(*deviate/5)
	 }
   
}

int main() {
    int num[5];
    int sum;
    float average;
    float deviate;

    printf("Enter five integers: ");
    for(int i=0; i<5; i++){
    	scanf("%d", &num[i]);
	}

    calculateSumAndAverage(num, &sum, &average, &deviat);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("SD : .2f", deviate)

    return 0;
}









//Write a function which receives a float and an int from main( ),
// finds the product of these two and returns the product which is printed through main( )
//#include <stdio.h>
//  float num(float vale , int wale){
//      float product;
//      product = vale * wale;
//      return product;
//      
//  }
//
//int main() {
//    float make;
//    int made;
//    float result;
//    
//    printf("Enter the float no: ");
//    scanf("%f", &make);
//  printf("Enter the int no: ");
//    scanf("%d", &made);
//    
//    result =num(make , made);
//    printf("The result is: %.2f", result);
//    return 0;
//}


