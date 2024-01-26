// Write a program that will insert 10 integer elements in an array and print them in new lines.

//#include <stdio.h>
//
//int main() {
//    int arr[10];
//    int i;
//    
//    printf("Enter arrays: ");
//    
//    for(int i=1; i<10; i++){
//        scanf("%d", &arr[i]);
//    }
//    printf("Arrays are: \n");
//    for(int i=1; i<10; i++){
//        printf(" %d", arr[i]);
//    }
//
//    return 0;
//}


////Write a program to create two character arrays of same length and copy the content of one array into another in reverse order. ..

//#include <stdio.h>
//#include <string.h>
//
//
//int main(){
//	
//	char array[] ="123456";
//	char revarray[sizeof(array)];
//	
//	int lenght;
//	lenght = strlen(array);
//	
//	for(int i=0; i<lenght; i++){
//		revarray[i] = array[lenght - 1 - i ];
//	}
//	
//	printf("Array : %s\n", array);
//	printf("Revarray : %s\n", revarray);
//	
//	return 0;
//}
//
//
//



//Write a program to find out the largest and the smallest number in an array 
#include <stdio.h>

int main() {
    int arr[10]={21,23,43,45,65,77,7,23,45,65};
    int i;
    int smallest=arr[0];
    int largest=arr[0];
    
    
    for(int i=1; i<10; i++){
       if(smallest>arr[i]){
           smallest = arr[i];
       }
       if(largest<arr[i]){
           largest = arr[i];
       }
    }
     printf("Arrays are:");
    for(int i=1; i<10; i++){
        printf("%d\n", arr[i]);
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d", largest);

    return 0;
}
