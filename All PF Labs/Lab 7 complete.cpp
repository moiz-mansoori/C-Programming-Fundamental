//// Write a C Program to print half pyramid as using numbers 
//#include <stdio.h>
//
//int main() {
//    int a = 1;
//     int b = 12;
//      int c = 123;
//       int d = 1234;
//        int e = 12345;
//        printf("%d\n",a);
//        printf("%d\n",b);
//        printf("%d\n",c);
//        printf("%d\n",d);
//        printf("%d\n",e);
//    return 0;
//}


#include <stdio.h>

int main() {
    int n;
    int row =1 ;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    while (row <= n) {
        int col=1 ;
        
        while (col <= n) {
            printf("*");
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}


		# Fibonacci series
//#include <stdio.h>
int fibaconni(int num){
	if(num == 1){
		return false;
	}
	return fibaconni(num-1) + fibaconni(num-2);
}
int main(){
	int num=25;
	
	printf("fibaconni series\n");
	for(int i=1; i<=num; i++){
		int sum +=fibaconni(num);
		printf("%d", sum);
	}
	printf("/n");
	return 0;
}

//#include <stdio.h>
//
//int main(){
//	int x , y ;
//	
//	for( x=1; x<=9; x++){
//		for( y=1; y<=9; y++){
//			printf("%d \t", x * y);
//		}
//		printf("\n");
//	}
//	return 0;
//}

