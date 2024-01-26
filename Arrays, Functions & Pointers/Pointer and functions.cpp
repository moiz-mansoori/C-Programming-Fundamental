// #include <stdio.h>

//     void findSquare(int* number){
//         int square= *number * *number;
//       * number=square;
//     }

// int main() {
//      int number= 22;
//      findSquare(&number);
//      printf("Square is %d", number);
    
    
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int* multiply(int* num1, int* num2,  int* product)
{
    *product = *num1 * *num2;

    return product;
}

int main() {
    int num1 = 13;
    
    int num2 = 9;
    
    int product;
    multiply(&num1, &num2, &product);
    

    printf("Product is: %d", product);

    return 0;
}
