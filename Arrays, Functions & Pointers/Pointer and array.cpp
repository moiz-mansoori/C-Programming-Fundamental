// #include <stdio.h>

// int main() {
//     int numbers[5]={1,3,5,7,9};
    
//     for (int i=0; i<5; ++i) {
//         printf("%d=%p\n", numbers[i], &numbers[i]);
        
//     }
//     printf("Array address of 1: %p\n", numbers );
//      printf("Array address of 3: %p\n", numbers + 1 );
//      printf("Array address of 5: %p\n", numbers +2 );
//       printf("Array address of 7: %p\n", numbers+3 );
//       printf("Array address of 9: %p", numbers +4 );
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     float a[] = {13.24, 1.5, 1.5, 5.4, 3.5};
//     float *j;

//     j = a;          // Assign the address of the first element of the array 'a' to the pointer 'j'
//     j = j + 4;      // Move the pointer 'j' to the fifth element of the array 'a'

//     // The next line prints the value of 'j' (an address), the value pointed to by 'j' (*j), and the value of a[4]
//     printf("%d %d %d\n", j, *j, a[4]);

//     return 0;
// }






//# include <stdio.h> 
//int main( ) 
//{ 
//int  num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
//int  i ; 
//for ( i = 0 ; i <= 5 ; i++ ) 
//{ 
//printf ( "address = %u ", &num[ i ] ) ; 
//printf ( "element = %d %d ", num[ i ], *( num + i ) ) ;  
//printf ( "%d %d\n", *( i + num ), i[ num ] ) ; 
//} 
//return 0 ; 
//} 









#include <stdio.h>

int main() {
    
    int array[5] = {34, 12, 21, 54, 48};
    int largest = *array;
    for (int i = 0; i < 5; ++i) {
        if (largest < *(array + i)) {
            largest = *(array + i);
        }
        else {
            printf("%d\n", *(array + i));
        }
    }
    printf("Largest element of array is %d", largest);

    return 0;
}
