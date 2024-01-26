// A certain grade of steel is graded according to the following conditions:
// (i)	Hardness must be greater than 50
// (ii)	Carbon content must be less than 0.7
// (iii)	Tensile strength must be greater than 5600

// The grades are as follows:
// Grade is 10 if all three conditions are met. Grade is 9 if conditions (i) and (ii) are met. Grade is 8 if conditions (ii) and (iii) are met. Grade is 7 if conditions (i) and (iii) are met. Grade is 6 if only one condition is met.
// Grade is 5 if none of the conditions are met.
// Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.

//#include <stdio.h>
//
//int main() {
//    int hardness;
//    float carbonContent, tensileStrength;
//    int grade = 5;
//
//    printf("Enter the hardness of the steel: ");
//    scanf("%d", &hardness);
//
//    printf("Enter the carbon content of the steel: ");
//    scanf("%f", &carbonContent);
//
//    printf("Enter the tensile strength of the steel: ");
//    scanf("%f", &tensileStrength);
//
//    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
//        grade = 10;
//    } else if (hardness > 50 && carbonContent < 0.7) {
//        grade = 9;
//    } else if (carbonContent < 0.7 && tensileStrength > 5600) {
//        grade = 8;
//    } else if (hardness > 50 && tensileStrength > 5600) {
//        grade = 7;
//    } else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
//        grade = 6;
//    }
//
//    printf("The grade of the steel is: %d\n", grade);
//
//    return 0;
//}





//Any character is entered through the keyboard; write a program to determine whether the character entered is a capital letter,
// a small case letter, a digit or a special symbol. 
//#include <stdio.h>
//
//int main(){
//	char character;
//	printf("Enter what you want: ");
//	scanf("%c", &character);
//	
//	if(character >= 'A' && character <= 'Z'){
//		printf("The character is capital letter");
//	}
//	else if(character >= 'a' && character <= 'z'){
//			printf("The character is small letter");
//	}
//	else if(character >= '0' && character <= '9'){
//			printf("The character is digit");
//	}
//	else{
//		printf("The characters is special synmbol");
//	}
//	return 0;
//}
//




////Write a program for quiz, where the system asks question and user will select answer from the given four options. On correct answer the program will congratulate and on wrong answer print sorry message.
//#include <stdio.h>
//
//int main() {
//    int answer;
//    int score = 0;
//
//    printf("Welcome to the Quiz!\n\n");
//
//    printf("Question 1: What is the capital of France?\n");
//    printf("1. London\n");
//    printf("2. Paris\n");
//    printf("3. Rome\n");
//    printf("4. Berlin\n");
//    printf("Enter your answer (1-4): ");
//    scanf("%d", &answer);
//
//    if (answer == 2) {
//        printf("Correct answer! Congratulations!\n");
//        score++;
//    } else {
//        printf("Sorry, wrong answer!\n");
//    }
//
//    printf("\n");
//
//    printf("Question 2: Who painted the Mona Lisa?\n");
//    printf("1. Leonardo da Vinci\n");
//    printf("2. Pablo Picasso\n");
//    printf("3. Vincent van Gogh\n");
//    printf("4. Michelangelo\n");
//    printf("Enter your answer (1-4): ");
//    scanf("%d", &answer);
//
//    if (answer == 1) {
//        printf("Correct answer! Congratulations!\n");
//        score++;
//    } else {
//        printf("Sorry, wrong answer!\n");
//    }
//
//    printf("\n");
//
//    printf("Question 3: What is the largest planet in our solar system?\n");
//    printf("1. Jupiter\n");
//    printf("2. Saturn\n");
//    printf("3. Earth\n");
//    printf("4. Mars\n");
//    printf("Enter your answer (1-4): ");
//    scanf("%d", &answer);
//
//    if (answer == 1) {
//        printf("Correct answer! Congratulations!\n");
//        score++;
//    } else {
//        printf("Sorry, wrong answer!\n");
//    }
//
//    printf("\n");
//
//    printf("Quiz complete! You scored %d out of 3.\n", score);
//
//    return 0;
//}
//


