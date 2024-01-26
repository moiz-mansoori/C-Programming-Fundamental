#include <stdio.h>
#include <windows.h>
#include <time.h>


int main() {
	
    printf("Moiz Mansoori / 22F-BSAI-32\n");
    system("color 2F");

    time_t now;
    time(&now);
    struct tm* ptsTimeInfo = localtime(&now); 
    
    //    ptsTimeInfo->tm_hour += 5;

    if (ptsTimeInfo->tm_min >= 60) {
        ptsTimeInfo->tm_hour += 1;
        ptsTimeInfo->tm_min -= 60;
    }
    
    if (ptsTimeInfo->tm_hour >= 12) {
        ptsTimeInfo->tm_hour -= 12;
    }

    printf("Date: %02d/%02d\n", ptsTimeInfo->tm_mday, ptsTimeInfo->tm_mon + 1);
    printf("Time: %02d:%02d:%02d\n", ptsTimeInfo->tm_hour, ptsTimeInfo->tm_min, ptsTimeInfo->tm_sec);

    int correctPin = 2255;
    int selectedOption, enteredPin;
    int withdrawalAmount = 1;
    float accountBalance = 1000.0;
    int remainingTransactions = 1;
    int invalidPinCount = 0;

    while (correctPin != enteredPin) {
        printf("\n\tPlease enter your secret PIN: ");
        scanf("%d", &enteredPin);
        
        if (enteredPin != correctPin) {
            Beep(610, 500);
            printf("INVALID PIN! PLEASE ENTER THE CORRECT PIN");
        }
        
        invalidPinCount++;
        
        if (invalidPinCount == 3 && correctPin != enteredPin) {
            printf("\n\t==========*Maximum number of incorrect PIN attempts reached*==========");
            exit(0);
        }
    }

    while (remainingTransactions != 0) {
    	
        printf("\n\t\t\t==================*WELCOME TO ATM SERVICE*==================");
        printf("\n\t\t\t==================*Available Transactions*==================");
        printf("\n\n\t 1. Withdrawal amount");
        printf("\n\t 2. Deposit amount");
        printf("\n\t 3. Check current balance");
        printf("\n\t 4. Quit");
        printf("\n\n\t Please select an option: ");
        scanf("%d", &selectedOption);

        switch (selectedOption) {
            case 1:
                while (withdrawalAmount % 500 != 0) {
                    printf("\n\tEnter the amount: ");
                    scanf("%d", &withdrawalAmount);
                    
                    if (withdrawalAmount % 500 != 0) {
                        printf("\n\tThe amount should be a multiple of 500");
                    }
                }
                
                if (accountBalance < withdrawalAmount) {
                    printf("\n\tInsufficient balance");
                    withdrawalAmount = 1;
                } else {
                    accountBalance -= withdrawalAmount;
                    printf("\n\tYou have withdrawn Rs. %d PKR. Your new balance is %.2f PKR", withdrawalAmount, accountBalance);
                    withdrawalAmount = 1;
                }
                break;

            case 2:
                printf("\n\tPlease enter the amount: ");
                scanf("%d", &withdrawalAmount);
                accountBalance += withdrawalAmount;

                printf("\tYou have deposited Rs. %d PKR. Your new balance is %.2f PKR", withdrawalAmount, accountBalance);
                withdrawalAmount = 1;
                break;

            case 3:
                printf("\n\tYour balance is Rs. %.2f PKR", accountBalance);
                break;

            case 4:
                printf("\n\t==========*Thank you for using ATM service*==========");
                exit(0);
                break;

            default:
                Beep(610, 500);
                printf("\n\t\tINVALID OPTION!");
        }

        printf("\n\n\tDo you wish to perform another transaction? Press 1 [Yes] or 0 [No]: ");
        scanf("%d", &remainingTransactions);
        
    }

    return 0;
}

