// Write a program to print the table (till 10) of the integer taken input from the user. for loop
//#include <stdio.h>
//
//int main() {
//     int product;
//     int number;
//     printf("Enter value: ");
//     scanf("%d", &number);
//     int count;
//    
//     for(int i= 1; i<=10; i++){
//         
//         printf("%d * %d = %d\n", number, i, number * i);
//        
//     }
//
//    return 0;
//}





//// Write a program that prints squares of the integer taken as input, until the square is less than 1000.
//#include <stdio.h>
//
//int main() {
//    int number;
//
//    printf("Enter an integer: ");
//    scanf("%d", &number);
//
//    int square = number * number;
//
//    while (square < 1000) {
//        printf("Square of %d is %d\n", number, square);
//        number++;
//        square = number * number;
//    }
//
//    return 0;
//}



//// Write a program that takes character input. Terminate when ‘X’  is pressed.
//#include <stdio.h>
//
//int main() {
//    char tum;
//    printf("Enter character: ");
//
//    for (;;) {
//        scanf(" %c", &tum);
//        if (tum == 'X' || 'x'){
//      break;
//}
//  printf("You entered: %c",tum);
//    }
//    
//   
//    printf("Terminated. \n");
//    
//    return 0;
//}



//Write a program that takes character input unless Enter is pressed and print total number of inputs by the user. 
//#include <stdio.h>
//
//int main() {
//    char num;
//    int value = 0;
//    printf("Enter the character you want: ");
//    
//    while ((num = getchar()) != '\n'){
//        value++;
//    }
//    printf("The num you entered is: %d\n", value);
//    
//
//    return 0;
//}



 // Write a program to generate a series of 
// a)	first 50 even numbers
// b)	first 50 odd numbers


// WHILE LOOP
//#include <stdio.h>
//int main(){
//    int count =0;
//    int num = 1;
//    
//    printf("First 50 ODD numbers: \n");
//    while(count <= 50){
//        printf("%d\n", num);
//        num+=2;
//        count++;
//    }
//    return 0;
//}



			# same but different method
// #include <stdio.h>
// int main(){
//     int count =0;
//     int num = 0;
    
//     printf("First 50 even numbers: \n");
//     while(count <= 50){
//         printf("%d\n", num);
//         num+=2;
//         count++;
//     }
//     return 0;
// }


// 	# same but different method using FOR LOOP

// #include <stdio.h>
  
// int main() {
  
//     printf("First 50 even numbers:\n");
//     for (int i = 1; i <= 50; i++) {
//         printf("%d \n", 2 * i+ 1);
//     }

//     return 0;
// }


				# same but different method
// #include <stdio.h>

// int main() {
//     printf("First 50 even numbers:\n");
//     for (int i = 1; i <= 50; i++) {
//         printf("%d \n", 2 * i);
//     }

//     return 0;
// }

