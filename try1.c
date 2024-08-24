////////#include<stdio.h>
////////int main()
////////{
////////	printf("mckv"); // infinte print
////////	main();
////////	return 1;
////////}
////////{
////////	int i=2;
////////	{
////////		int i=4,j=5;
////////		printf("%d%d",i,j);   //error 
////////	}
////////	printf("%d%d",i,j);
////////	return 0;
////////
//////
//////
////////{
////////	int i=1;
////////	{
////////		while(i++<=5)
////////		{
////////			printf("%d",i++);  //246
////////		}
////////	}
////////		return 0;
////////	
////////}
////////#include<stdio.h>
////////int main()
////////{
////////	int x;
////////	for(x=3; x=0; x++)
////////	return 0;
////////}
//////
//////#include <stdio.h>
//////
//////int main() {
//////    int num1 = 0, num2 = 1, nextTerm = 0;
//////    int range;
//////
//////    printf("Enter the range: ");
//////    scanf("%d", &range);
//////
//////    printf("Fibonacci Series up to %d: ", range);
//////
//////    while (nextTerm <= range) {
//////        printf("%d ", nextTerm);
//////
//////        num1 = num2;           // Assign the value of num2 to num1
//////        num2 = nextTerm;       // Assign the value of nextTerm to num2
//////        nextTerm = num1 + num2; // Calculate the next term
//////    }
//////
//////    return 0;
//////}
//////
//////
//////
//////
//////
////#include <stdio.h>
////
////#define ROWS 3
////#define COLS 3
////
////int main() {
////    int matrix1[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
////    int matrix2[ROWS][COLS] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
////    int sum[ROWS][COLS];
////    int i,j;
////
////    printf("Matrix 1:\n");
////    for ( i = 0; i < ROWS; i++) {
////        for (j = 0; j < COLS; j++) {
////            printf("%d ", matrix1[i][j]);
////        }
////        printf("\n");
////    }
////
////    printf("\nMatrix 2:\n");
////    for ( i = 0; i < ROWS; i++) {
////        for ( j = 0; j < COLS; j++) {
////            printf("%d ", matrix2[i][j]);
////        }
////        printf("\n");
////    }
////
////    printf("\nSum of the matrices:\n");
////    for ( i = 0; i < ROWS; i++) {
////        for ( j = 0; j < COLS; j++) {
////            sum[i][j] = matrix1[i][j] + matrix2[i][j];
////            printf("%d ", sum[i][j]);
////        }
////        printf("\n");
////    }
////
////    return 0;
////}
//
//
//#include <stdio.h>
//
//int main() {
//    char lowercase, uppercase;
//    int lowercaseAscii, uppercaseAscii;
//
//    printf("Enter a character in lowercase: ");
//    scanf("%c", &lowercase);
//
//    // Convert lowercase to uppercase
//    uppercase = lowercase - 32;
//
//    // Get ASCII values
//    lowercaseAscii = lowercase;
//    uppercaseAscii = uppercase;
//
//    printf("Uppercase character: %c\n", uppercase);
//    printf("ASCII value of lowercase character '%c': %d\n", lowercase, lowercaseAscii);
//    printf("ASCII value of uppercase character '%c': %d\n", uppercase, uppercaseAscii);
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    float totalMarks = 0.0;
    float averageMarks;
    int belowAverageCount = 0,i;

    // Input student details
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Class XII marks (in percentage) for %s: ", students[i].name);
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    // Calculate average marks
    averageMarks = totalMarks / MAX_STUDENTS;

    // Display names of students below average marks
    printf("\nStudents who scored below average marks:\n");
    for ( i = 0; i < MAX_STUDENTS; i++) {
        if (students[i].marks < averageMarks) {
            printf("%s\n", students[i].name);
            belowAverageCount++;
        }
    }

    if (belowAverageCount == 0) {
        printf("No student scored below average marks.\n");
    }

    return 0;
}

