#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[3];
    int totalMarks;
};

int main() {
    int numStudents,i,j,total=0;
	float avg;
	printf("Enter the number of Students:");
	scanf("%d",&numStudents);
    struct Student students[numStudents];
    
    
    for (i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        students[i].totalMarks = 0;
        printf("Enter marks for 3 subjects:\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
        printf("\n");
    }

    // Display Average number of all students
    for(i=0;i<numStudents;i++){	
       total+=students[i].totalMarks;
	   avg=total/numStudents;
    }
	printf("Average number of all students:%f",avg);

    // Find the student who came first
    int firstStudent = 0;
    for (i = 1; i < numStudents; i++) {
        if (students[i].totalMarks > students[firstStudent].totalMarks) {
            firstStudent = i;
        }
    }
    printf("\nStudent who came first (highest total marks): %s\n", students[firstStudent].name);

    return 0;
}