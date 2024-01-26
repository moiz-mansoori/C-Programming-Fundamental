//// In a bitmap file black is represented by 1 and white by 0. Create a 8X8 pattern and initialize using following data: 1 1 1 0 0 1 1 1
//// 1 0 0 0 0 0 1 0
//// 1 1 1 1 1 1 0 0
//// 1 1 1 0 0 0 1 0
//// 1 0 1 0 1 0 1 0
//// 0 0 0 0 0 0 0 0
//// 1 1 1 1 1 1 1 1
//// 0 0 0 0 1 1 1 1
//#include <stdio.h>
//
//int main() {
//    int pattern[8][8] = {{1, 1, 1, 0, 0, 1, 1, 1},{1, 0, 0, 0, 0, 0, 1, 0},{1, 1, 1, 1, 1, 1, 0, 0},{1, 1, 1, 0, 0, 0, 1, 0},{1, 0, 1, 0, 1, 0, 1, 0},{0, 0, 0, 0, 0, 0, 0, 0},{1, 1, 1, 1, 1, 1, 1, 1},{0, 0, 0, 0, 1, 1, 1, 1}};
//    printf("Pattern:\n");
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 8; j++) {
//            printf("%d ", pattern[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//Write a program that takes input in a string (char array) and 'find' a particular character and 'replace' that character. 
//The program should replace all the occurrences of that particular character with the new character
//
//#include <stdio.h>
//#include <string.h>
//
//void calculate(char arr[], char find, char replace){
//	int lenght = strlen(arr);
//	for(int i=0; i<lenght; i++){
//		if(arr[i] == find){
//			arr[i]=replace;
//		}
//	}
//}
//int main(){
//	char arr[10];
//	char find;
//	char replace;
//	
//	printf("Enter the term: ");
//	fgets(arr, sizeof(arr), stdin);
//	printf("Enter the char you find:");
//	scanf("%s", &find);
//	
//		printf("Enter the char you replace:");
//	scanf("%s", &replace);
//	
//	calculate(arr,find,replace);
//printf("Modified string: %s\n", arr); 
//	return 0;
//}


//Write a program to pick up the largest number and sum of all the integers from any 5 x 5 matrix.

#include <stdio.h>
#include <string.h>
int pick(int matrices [5][5]){
	int largest = matrices[0][0];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(matrices[i][j]> largest){
				largest = matrices[i][j];
			}
		}
	}
	return largest;
}
int main(){
	int matrices [5][5];
	
	printf("Enter the 5 by 5 matrices:");
		for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			scanf("%d", &matrices[i][j]);
		}	
}
int largest = pick(matrices);
printf("The largest matrice is: %d\n", largest);
return 0;}






















