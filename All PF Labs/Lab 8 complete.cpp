//An electric power distribution company charges its domestic consumers as follows.
//Consumption Units	Rate of Charge
//¢	0-200	Rs.0.50 per unit
//¢	201-400	Rs.100 plus Rs.0.65 per unit excess 200
//¢	401-600	Rs.230 plus Rs.0.80 per unit excess of 400.
//Write a C program that reads the customer number and power consumed and prints the amount to be paid by the customer. The program runs at least once.

//#include <stdio.h>
//
//int main() {
//    int customer_number;
//    int power_consumed;
//    float amount_to_be_paid;
//
//    char choice = 'Y';
//
//    while (choice == 'Y' || choice == 'y') {
//        printf("Enter customer number: ");
//        scanf("%d", &customer_number);
//
//        printf("Enter power consumed (in units): ");
//        scanf("%d", &power_consumed);
//
//        if (power_consumed <= 200) {
//            amount_to_be_paid = power_consumed * 0.50;
//        } else if (power_consumed <= 400) {
//            amount_to_be_paid = 100 + (power_consumed - 200) * 0.65;
//        } else if (power_consumed <= 600) {
//            amount_to_be_paid = 230 + (power_consumed - 400) * 0.80;
//        }
//
//        printf("Amount to be paid by customer %d: Rs. %.2f\n", customer_number, amount_to_be_paid);
//
//        printf("Do you want to calculate for another customer? (Y/N): ");
//        scanf(" %c", &choice);
//    }
//
//    return 0;
//}
//


//Write a C program that allows the user to enter in 5 grades, ie, marks between 0 - 100.
// The program must calculate  the average mark, and state the number of marks less than 65.

# include <stdio.h>

int main(){
	int marks[5];
	int sum = 0 ;
	int count =0;
	int i=0;
	
	printf("Enter the marks between (0-100):\n ");
	
	do{
		printf("Grade %d: ", i+1);
		scanf("%d", &marks[i]);
		    sum += marks[i];
		
		if(marks[i] < 65){
			count++;
		}
		i++;
	} while(i < 5);
	
	float average = (float)sum/5;
	
	printf("Average marks is: %.2f", average);
	printf("Less than 65 is %d", count);
	
}
