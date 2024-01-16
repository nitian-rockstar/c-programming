#include <stdio.h>

// Function to convert grade to grade points
float getGradePoints(char grade) {
    switch (grade) {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        // Add more cases for other grades if needed
        default:
            return 0.0; // Default case for invalid grades
    }
}

int main() {
    // Subject details
    char subjects[][20] = {"English", "Math", "Science", "Physics", "Chemistry", "Hindi"};
    char grades[] = {'A', 'B', 'C', 'A', 'B', 'C'};
    int credits[] = {2, 3, 4, 3, 4, 2};
    int numSubjects = sizeof(subjects) / sizeof(subjects[0]);

    // Calculate total grade points and total credits
    float totalGradePoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; i++) {
        totalGradePoints += getGradePoints(grades[i]) * credits[i];
        totalCredits += credits[i];
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Output the CGPA
    printf("Subject\t\tGrade\tCredit\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("%s\t\t%c\t%d\n", subjects[i], grades[i], credits[i]);
    }
    printf("\nCGPA: %.2f\n", cgpa);

    return 0;
}
