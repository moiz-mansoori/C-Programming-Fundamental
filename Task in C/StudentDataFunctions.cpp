//Create a structure to specify data on students given below: 
//Roll number, Name, Department, Course, Year of joining 
//Assume that there are not more than 450 students in the college. 
//(1) Write a function to print names of all students who joined in a 
//particular year. 
//(2) Write a function to print the data of a student whose roll 
//number is received by the function. 


#include <stdio.h>
#include <string.h>


struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

void printStudentsByYear(struct Student students[], int numStudents, int year) {
    printf("Students who joined DUET in %d:\n", year);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

void printStudentByRollNumber(struct Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student Data:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    

}

int main() {
    int numStudents = 3;
    struct Student students[3] = {
        {32, "Moiz Mansoori", "Computer Science", "B.Tech", 2022},
        {29, "Muzammil", "Electrical", "B.E", 2022},
        {9, "Hamza", "Mechanical", "B.Tech", 2022}
    };

    int yearToSearch = 2022;
    printStudentsByYear(students, numStudents, yearToSearch);

    int rollNumberToSearch = 32;
    printStudentByRollNumber(students, numStudents, rollNumberToSearch);

    return 0;
}



