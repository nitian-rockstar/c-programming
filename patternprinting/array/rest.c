#include <stdio.h>

int main() {
    // Input the number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Initialize an array to store student marks
    float student_array[n];

    // Input student marks and store them in the array
    for (int i = 0; i < n; ++i) {
        while (1) {
            printf("Enter the marks for student %d: ", i + 1);
            if (scanf("%f", &student_array[i]) == 1) {
                // Check if the mark is in the valid range (0 to 100)
                if (student_array[i] >= 0 && student_array[i] <= 100) {
                    break;
                } else {
                    printf("Marks should be between 0 and 100. Please enter again.\n");
                }
            } else {
                printf("Invalid input. Please enter a valid numerical value.\n");
                // Clear the input buffer
                while (getchar() != '\n');
            }
        }
    }

    // Display all the marks on the screen
    printf("\nAll Student Marks:\n");
    for (int i = 0; i < n; ++i) {
        printf("Student %d: %.2f\n", i + 1, student_array[i]);
    }

    // Calculate total and average marks
    float total_marks = 0;
    for (int i = 0; i < n; ++i) {
        total_marks += student_array[i];
    }
    float average_marks = total_marks / n;

    // Display total and average marks
    printf("\nTotal Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    // Find minimum and maximum marks
    float min_marks = student_array[0];
    float max_marks = student_array[0];

    for (int i = 1; i < n; ++i) {
        if (student_array[i] < min_marks) {
            min_marks = student_array[i];
        }
        if (student_array[i] > max_marks) {
            max_marks = student_array[i];
        }
    }

    // Display minimum and maximum marks
    printf("Minimum Marks: %.2f\n", min_marks);
    printf("Maximum Marks: %.2f\n", max_marks);

    // Counting the number of marks below, equal to, and above average
    int below_average_count = 0;
    int equal_to_average_count = 0;
    int frequency[101] = {0};  // Array to store the frequency of each mark

    for (int i = 0; i < n; ++i) {
        if (student_array[i] < average_marks) {
            below_average_count++;
        } else if (student_array[i] == average_marks) {
            equal_to_average_count++;
        }
        frequency[(int)student_array[i]]++;
    }

    // Display the counts
    printf("\nNumber of Marks Below Average: %d\n", below_average_count);
    printf("Number of Marks Equal to Average: %d\n", equal_to_average_count);

    // Display frequency of each mark
    printf("\nFrequency of Each Mark:\n");
    for (int i = 0; i <= 100; ++i) {
        if (frequency[i] > 0) {
            printf("Mark %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
