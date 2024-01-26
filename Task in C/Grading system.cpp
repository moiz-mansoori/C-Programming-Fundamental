//DUET  has following grading scheme, write programming code to implement the grading scheme. Marks will be entered by the user:

 #include <stdio.h>
int main() {
     int marks;
	  float op;

     printf("Enter your marks: ");
     scanf("%d", &marks);
    
     switch (marks){
       case 85 ... 100:
       printf("Your Grade is A++ and CGPA is 4.0");
         break;
       case 79 ... 84:
       printf("Your Grade is A and CGPA is 3.70");
         break;
         case 75 ... 78:
       printf("Your Grade is B++ and CGPA is 3.33");
         break;
         case 71 ... 74:
       printf("Your Grade is B and CGPA is 3.0");
         break;
         case 67 ... 70:
       printf("Your Grade is B- and CGPA is 2.67");
         break;
         case 63 ... 66:
       printf("Your Grade is C+ and CGPA is 2.33");
         break;
         case 59 ... 62:
       printf("Your Grade is C and CGPA is 2.0");
         break;
         case 55 ... 58:
       printf("Your Grade is C- and CGPA is 1.67");
         break;
         case 51 ... 54:
       printf("Your Grade is D+ and CGPA is 1.33");
         break;
         case 50:
       printf("Your Grade is D and CGPA is 1.0");
         break;
        
         default:
         printf("Keep work hard for next semester");
         break;
        
   }
  

    return 0;
 }



			# Same question but different method

// #include <stdio.h>
//
//int main(){
//    
//    int marks;
//    printf("Enter your marks: ");
//    scanf("%d", &marks);
//    
//    if(85>= 100){
//        printf("Your Grade is A++ and CGPA is 4.0");
//    }
//    else if(79>=marks==84){
//        printf("Your Grade is A and CGPA is 3.70");
//    }
//        else if(75>=marks<=78){
//        printf("Your Grade is B+ and CGPA is 3.33");
//    }
//        else if(71>=marks<=74){
//        printf("Your Grade is B and CGPA is 3.0");
//    }
//        else if(67>=marks<=70){
//        printf("Your Grade is B- and CGPA is 2.70");
//    }
//        else if(63>=marks<=66){
//        printf("Your Grade is C+ and CGPA is 2.30");
//    }
//        else if(59>=marks<=62){
//        printf("Your Grade is C and CGPA is 2.0");
//    }
//        else if(55>=marks<=58){
//        printf("Your Grade is C- and CGPA is 1.67");
//    }
//        else if(51>=marks<=54){
//        printf("Your Grade is D+ and CGPA is 1.33");
//    }
//        else if(marks<=50){
//        printf("Your Grade is D and CGPA is 1.0");
//    }
//        else{
//            printf("Keep work hard for next semester");
//        }
//    
//    return 0;
//}

