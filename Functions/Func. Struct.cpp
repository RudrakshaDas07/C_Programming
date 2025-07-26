#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

// Function to print names of all students who joined in a particular year
void StudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].year_of_joining == targetYear) {
            printf("- %s\n", students[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found for the year %d.\n", targetYear);
    }
}

// Function to print the data of a student whose roll number is given
void StudentDataByRoll(struct Student students[], int numStudents, int targetRoll) {
    printf("Searching for student with Roll Number: %d\n", targetRoll);
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].roll_number == targetRoll) {
            printf("Student Found:\n");
            printf("  Roll Number: %d\n", students[i].roll_number);
            printf("  Name: %s\n", students[i].name);
            printf("  Department: %s\n", students[i].department);
            printf("  Course: %s\n", students[i].course);
            printf("  Year of Joining: %d\n", students[i].year_of_joining);
            found = 1;
            }
    }
    if (found<1) {
        printf("No student found with Roll Number: %d.\n", targetRoll);
    }
}

int main() {   
    struct Student students[10];
    int numStudents = 0; // Current number of students

    // Input student data
    printf("Enter data for up to 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number (Enter 0 for roll number to stop): ");
        scanf("%d", &students[i].roll_number);
        if (students[i].roll_number == 0) {
            break;
        }
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Reads string with spaces
        printf("Department: ");
        scanf(" %[^\n]", students[i].department);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
        numStudents++;

    } 
    int choice;
    do {
        printf("\nChoose an option:\n");
        printf("1. Print names of students by year\n");
        printf("2. Print data of a student by roll number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int year_to_search;
                printf("Enter the year to search: ");
                scanf("%d", &year_to_search);
                StudentsByYear(students, numStudents, year_to_search);
                break;
            }
            case 2: {
                int roll_num_to_search;
                printf("Enter the roll number to search: ");
                scanf("%d", &roll_num_to_search);
                StudentDataByRoll(students, numStudents, roll_num_to_search);
                break;
            }
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

  

 