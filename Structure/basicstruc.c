#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100


typedef struct 
{
    char name[MAX_NAME_LENGTH];
    int id;
    float gpa;
} Student;


void readStudentDetails(Student *student) 
{
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter student ID: ");
    scanf("%d", &student->id);
    printf("Enter student GPA: ");
    scanf("%f", &student->gpa);
}


float calculateAverageGPA(Student students[], int count) 
{
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += students[i].gpa;
    }
    return sum / count;
}


void displayStudentDetails(Student students[], int count)
{
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, ID: %d, GPA: %.2f\n", students[i].name, students[i].id, students[i].gpa);
    }
}

int main() 
{
    int n;

   
    printf("Enter the number of students: ");
    scanf("%d", &n);

   
    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }

    float averageGPA = calculateAverageGPA(students, n);

    displayStudentDetails(students, n);
    printf("\nAverage GPA: %.2f\n", averageGPA);
    free(students);

    return 0;
}
