//# include <stdio.h> 
//int main( ) 
//{ 
//int  array[ 26 ], i ; 
//for ( i = 0 ; i <= 25 ; i++ ) 
//{ 
//array[ i ] = 'A' + i ; 
//printf ( "%d %c\n", array[ i ], array[ i ] ) ; 
//} 
//return 0 ; 
//} 



//CharArrayExample 

//# include <stdio.h> 
//int main( ) 
//{ 
//int  array[ 26 ], i ; 
//for ( i = 0 ; i <= 25 ; i++ ) 
//{ 
//array[ i ] = 'A' + i ; 
//printf ( "%d %c\n", array[ i ], array[ i ] ) ; 
//} 
//return 0 ; 
//} 



//ArrayInitializationExample 

//# include <stdio.h> 
//int main( ) 
//{ 
//int  sub[ 50 ], i ; 
//for ( i = 0 ; i <= 48 ; i++ ) ; 
//{ 
//sub[ i ] = i ; 
//printf ( "%d\n", sub[ i ] ) ; 
//} 
//return 0 ; 
//} 



//ArraySearchExample
//#include <stdio.h>
//
//// Function to find if the number is present in the array and count its occurrences
//int searchAndCount(int arr[], int size, int target) {
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == target) {
//            count++;
//        }
//    }
//    return count;
//}

//int main() {
//    int size = 25;
//    int arr[size];
//
//    printf("Enter %d numbers for the array:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int target;
//    printf("Enter the number to be searched: ");
//    scanf("%d", &target);
//
//    int count = searchAndCount(arr, size, target);
//
//    if (count > 0) {
//        printf("%d is present in the array %d time(s).\n", target, count);
//    } else {
//        printf("%d is not present in the array.\n", target);
//    }
//
//    return 0;
//}






//# include <stdio.h> 
//int main( ) 
//{ 
//int  a[ 5 ] = { 5, 1, 15, 20, 25 } ; 
//int  i, j, k = 1, m ; 
//i = ++a[ 1 ] ; 
//j = a[ 1 ]++ ; 
//m = a[ i++ ] ; 
//printf ( "%d %d %d\n", i, j, m ) ; 
//return 0;
//} 



//Write a program to enter 5 subjects marks from user and their average
//#include <stdio.h>
//
//int main() {
//
//   int marks[5];
//   float total;
//   print("Enter 5 subjects marks: ");
//   for (int i = 0; i<5; ++i){
//       scanf("%d",&marks[i]);
//   }
//for(int i=0; i<5; ++i){
//	
//    total= marks[i]+total;
//}
//	
//    int mark=sizeof(marks)/sizeof(marks[0]);
//    total=total/mark;
//    
//    printf("the average marks is %.2lf",total);
//
//
//    return 0;
//}





//Twenty-five numbers are entered from the keyboard into an array. 
//Write a program to find out how many of them are positive, how 
//many are negative, how many are even and how many odd. 
//
//#include <stdio.h>
//
//int main(){
//	int num[5];
//	int post = 0; 
//	int neg = 0;
//	 int even=0;
//	 int odd=0;
//	 
//	 printf("Enter the numbers: ");
//	 for(int i=0; i<=5 ; i++){
//	 	scanf("%d", &num[i]);
//	 }
//	 
//	  printf("Enter the numbers: ");
//	 for(int i=0; i<=5 ; i++){
//	 	if(num[i] > 0){
//	 		post++;
//		 }
//		 else if (num[i] < 0){
//		 	neg++;
//		 }
//		 else if (num[i] == 0){
//		 	printf("Undeclared");
//		 }
//	 }
// for(int i=0; i<=5 ; i++){
//   if (num[i] % 2 == 0) {
//            even++;
//        } else {
//            odd++;
//        }
//    }
//}
//	
//	    printf("The positive no is\n: %d",post);
//		printf("The negative no is\n: %d",neg);
//		printf("The EVEN no is: %d\n",even);
//		printf("The ODD no is: %d",odd);
//	
//	return 0;
//}


//			Same Question but different method 

//#include <stdio.h>
//
//int main() {
//    int numbers[25];
//    int positiveCount = 0, negativeCount = 0, evenCount = 0, oddCount = 0;
//
//    printf("Enter 25 numbers:\n");
//    for (int i = 0; i < 25; i++) {
//        scanf("%d", &numbers[i]);
//    }
//
//    for (int i = 0; i < 25; i++) {
//        if (numbers[i] > 0) {
//            positiveCount++;
//        } else if (numbers[i] < 0) {
//            negativeCount++;
//        }
//
//        if (numbers[i] % 2 == 0) {
//            evenCount++;
//        } else {
//            oddCount++;
//        }
//    }
//
//    printf("Positive numbers: %d\n", positiveCount);
//    printf("Negative numbers: %d\n", negativeCount);
//    printf("Even numbers: %d\n", evenCount);
//    printf("Odd numbers: %d\n", oddCount);
//
//    return 0;
//}







//Twenty-five numbers are entered from the keyboard into an array. 
//The number to be searched is entered through the keyboard by the 
//user. Write a program to find if the number to be searched is 
//present in the array and if it is present, display the number of times 
//it appears in the array. 


//#include <stdio.h>
//
//int main() {
//    int arr[5];
//    int searchNumber, count = 0;
//
//    printf("Enter 25 numbers:\n");
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("Enter the number to be searched: ");
//    scanf("%d", &searchNumber);
//
//    for (int i = 0; i < 5; i++) {
//        if (arr[i] == searchNumber) {
//            count++;
//        }
//    }
//
//    if (count > 0) {
//        printf("%d appears %d time(s) in the array.\n", searchNumber, count);
//    } else {
//        printf("%d does not appear in the array.\n", searchNumber);
//    }
//
//    return 0;
//}

