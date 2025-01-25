#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Welcome to the University GPA Calculator!\n\n");

    int lessonAmount;
    char letterGrade1, letterGrade2;
    int credit;
    int totalCredits = 0;
    float totalPoints = 0.0;

    printf("How many courses have you taken? Please enter the number: ");
    scanf("%d", &lessonAmount);

    for (int i = 0; i < lessonAmount; i++) {
        printf("\nEnter your letter grade and the course credit (e.g., B A 4): ");
        scanf(" %c %c %d", &letterGrade1, &letterGrade2, &credit);

        totalCredits += credit;

        if (letterGrade1 == 'A' && letterGrade2 == 'A') {
            totalPoints += 4.00 * credit;
        }
        else if (letterGrade1 == 'A' && letterGrade2 == '-') {
            totalPoints += 3.70 * credit;
        }
        else if (letterGrade1 == 'B' && letterGrade2 == '+') {
            totalPoints += 3.30 * credit;
        }
        else if (letterGrade1 == 'B' && letterGrade2 == 'B') {
            totalPoints += 3.00 * credit;
        }
        else if (letterGrade1 == 'B' && letterGrade2 == '-') {
            totalPoints += 2.70 * credit;
        }
        else if (letterGrade1 == 'C' && letterGrade2 == '+') {
            totalPoints += 2.30 * credit;
        }
        else if (letterGrade1 == 'C' && letterGrade2 == 'C') {
            totalPoints += 2.00 * credit;
        }
        else if (letterGrade1 == 'C' && letterGrade2 == '-') {
            totalPoints += 1.70 * credit;
        }
        else if (letterGrade1 == 'D' && letterGrade2 == '+') {
            totalPoints += 1.30 * credit;
        }
        else if (letterGrade1 == 'D' && letterGrade2 == 'D') {
            totalPoints += 1.00 * credit;
        }
        else if (letterGrade1 == 'F' && letterGrade2 == 'F') {
            totalPoints += 0.00 * credit;
        }
        else {
            printf("Invalid grade entered. Please try again.\n");
            i--;
        }
    }

    float gpa = totalPoints / totalCredits;
    printf("\nSummary:\n");
    printf("Total Credits: %d\n", totalCredits);
    printf("Total Points: %.2f\n", totalPoints);
    printf("Your GPA: %.2f\n", gpa);

    return 0;
}
