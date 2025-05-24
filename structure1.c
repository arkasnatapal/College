#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    char gender;
    char grade;
    int roll_no;
    int year_of_last_sem;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender);

        printf("Grade (A/B/C etc.): ");
        scanf(" %c", &students[i].grade);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Year of Last Semester (e.g., 2024): ");
        scanf("%d", &students[i].year_of_last_sem);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Gender: %c\n", students[i].gender);
        printf("Grade: %c\n", students[i].grade);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Year of Last Semester: %d\n", students[i].year_of_last_sem);
    }

    return 0;
}
