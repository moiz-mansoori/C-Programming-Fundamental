// The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.
//
//#include <stdio.h>
//
//int main(){
//    float lenght , breadth , radius;
//    float reactarea , perimeter;
//    float cirarea , circumference;
//    
//    printf("Enter the lenght: ");
//    scanf("%f", &lenght);
//    
//    printf("Enter the breadht: ");
//    scanf("%f", &breadth);
//    
//    printf("Enter the radius: ");
//    scanf("%f", &radius);
//    
//    // calculate rectangular
//    reactarea = lenght * breadth;
//    perimeter = 2*(lenght+breadth);
//    
//    // calculate circle
//    cirarea = 3.1415 * radius * radius;
//    circumference = 2 * 3.1415 * radius;
//    
//    printf("\n Rectangular\n");
//    printf("Area= %.2f\n", reactarea);
//    printf("Perimeter = %.2f\n",perimeter);
//    
//      printf("\n Circle\n");
//    printf("Area= %.2f\n", cirarea);
//    printf("Circumference=%.2f\n ", circumference);
//    
//    return 0;
//}






// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
//#include <stdio.h>
//
//int main() {
//    int number;
//    int sum = 0;
//
//    printf("Enter a five-digit number: ");
//    scanf("%d", &number);
//    while (number > 0) {
//        sum += number % 10;
//        number /= 10;
//    }
//
//    printf("Sum of digits: %d\n", sum);
//
//    return 0;
//}





// A cashier has currency notes of denominations 10, 50, and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
#include <stdio.h>

int main() {
  int amount;
  int notes10, notes50, notes100;

  printf("Enter the amount in hundreds: ");
  scanf("%d", &amount);

  notes10 = amount / 10;
  amount -= notes10 * 10;
  notes50 = amount / 50;
  amount -= notes50 * 50;
  notes100 = amount / 100;

  printf("10-rupee notes: %d\n", notes10);
  printf("50-rupee notes: %d\n", notes50);
  printf("100-rupee notes: %d\n", notes100);

  return 0;

}


