#include <stdio.h>
#include <string.h>

struct Student {
    int student_id;
    char student_name[30];
    float mark;
    char grade;
};

struct Student s[100];
int student_count = 0;

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void add_student() {
    int count;
    printf("Tell how many student records need to be added: ");
    scanf("%d", &count);
    clearBuffer(); // clear leftover newline

    for (int i = 0; i < count; i++) {
        printf("\n--- Enter details for student %d ---\n", student_count + 1);

        printf("Enter Student ID: ");
        scanf("%d", &s[student_count].student_id);
        clearBuffer();

        printf("Enter Student Name: ");
        fgets(s[student_count].student_name, sizeof(s[student_count].student_name), stdin);
        s[student_count].student_name[strcspn(s[student_count].student_name, "\n")] = '\0'; // remove newline

        printf("Enter Student Mark: ");
        scanf("%f", &s[student_count].mark);
        clearBuffer();

        printf("Enter Student Grade: ");
        scanf("%c", &s[student_count].grade);.......................................
        clearBuffer();

        student_count++;
    }

    printf("\n %d student(s) added successfully!\n", count);
}

void display_db() {
    if (student_count == 0) {
        printf("No student data to display!\n");
        return;
    }

    printf("\n---- Student Database ----\n");
    for (int i = 0; i < student_count; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", s[i].student_id);
        printf("Name: %s\n", s[i].student_name);
        printf("Mark: %.2f\n", s[i].mark);
        printf("Grade: %c\n", s[i].grade);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nEnter 1 to add student details, 2 to display, or 0 to exit: ");
        scanf("%d", &choice);
        clearBuffer(); // prevent input skip

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_db();
                break;
            case 0:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Enter a valid number (0, 1, or 2)\n");
        }
    }

    return 0;
}
