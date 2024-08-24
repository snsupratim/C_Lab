#include <stdio.h>

#define MAX_STUDENTS 60

// Structure definition
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to search for a student by roll number and display their data
void searchStudentByRollNumber(struct Student students[], int size, int rollNumber) {
	
	int i;
    for ( i = 0; i < size; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student Found!\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;  // Exit the function once student is found
        }
    }
    printf("Student not found with Roll Number: %d\n", rollNumber);
}

int main() {
    // Array of structures to store student data
    struct Student students[MAX_STUDENTS];
    int i;

    // Input data for students
    printf("Enter data for %d students:\n", MAX_STUDENTS);
    for ( i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Displaying student data
    printf("Student Data:\n");
    for ( i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Searching for a student by roll number
    int rollNumber;
    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNumber);
    searchStudentByRollNumber(students, MAX_STUDENTS, rollNumber);

    return 0;
}

