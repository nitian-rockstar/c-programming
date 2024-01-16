#include <stdio.h>
int main () {
    int n;
    printf("enter the number of student :");
    scanf("%d",&n);
    int student_array[n];
    printf("enter the mark(0-100) of each of the student  of individual subject say(maths):\n");
    for(int i=0;i<n;i++){
        while(1){
   printf("enter the marks of student %d :\n",i+1);
    if(scanf("%d",&student_array[i])==1){
        if(student_array[i]<=0 ||student_array[i]>100){
            printf("enter the number between 0 and 100\n");
        } 
        else {
            break;
        }}
        else {
            printf("invalid input: enter the valid input \n");
        while(getchar()!='\n');
        }

    }
    
}
float sum=0;
for(int i=0;i<n;i++){
     printf(" marks of student %d  is %d\n",i+1,student_array[i]);
    sum=sum+student_array[i];
}
printf("The total marks scored in the this subject by the student is : %.2f\n",sum);
float average=sum/n;
printf("The average marks scored in this subject is :%.2f\n ",average);
int min_marks,max_marks;
min_marks=student_array[0];
max_marks=student_array[0];
for(int i=1;i<n;i++){
    if(student_array[i]<min_marks){
        min_marks=student_array[i];
    }
    if(student_array[i]>max_marks){
        max_marks=student_array[i];
    }
}
printf("the minimum marks is : %d\n",min_marks);
printf("The maximum marks is :%d\n",max_marks);
float num_marks=0;
for(int i=0;i<n;i++){
    if(student_array[i]<average){
num_marks++;
    }
}
printf("the number of marks less than average marks are :%.2f\n",num_marks);
int similar_marks=0;
int frequency[101]={0};
for(int i=0;i<n;i++){
    if(average==student_array[i]){
        similar_marks+= i+1;
    }
    frequency[student_array[i]]++;
   
}
printf("the total number of marks which are similar to the average marks  :%d\n",similar_marks);

for(int i=0;i<=100;++i){
    if(frequency[i]>0){
        printf("Mark %d: %d times\n", i, frequency[i]);
        
    }
}
return 0;
}
// #include <stdio.h>

// int main() {
//     // Input the number of students
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     // Initialize an array to store student marks
//     float student_array[n];

//     // Input student marks and store them in the array
//     for (int i = 0; i < n; ++i) {
//         while (1) {
//             printf("Enter the marks for student %d: ", i + 1);
//             if (scanf("%f", &student_array[i]) == 1) {
//                 // Check if the mark is in the valid range (0 to 100)
//                 if (student_array[i] >= 0 && student_array[i] <= 100) {
//                     break;
//                 } else {
//                     printf("Marks should be between 0 and 100. Please enter again.\n");
//                 }
//             } else {
//                 printf("Invalid input. Please enter a valid numerical value.\n");
//                 // Clear the input buffer
//                 while (getchar() != '\n');
//             }
//         }
//     }

//     // Display all the marks on the screen
//     printf("\nAll Student Marks:\n");
//     for (int i = 0; i < n; ++i) {
//         printf("Student %d: %.2f\n", i + 1, student_array[i]);
//     }

//     // Calculate total and average marks
//     float total_marks = 0;
//     for (int i = 0; i < n; ++i) {
//         total_marks += student_array[i];
//     }
//     float average_marks = total_marks / n;

//     // Display total and average marks
//     printf("\nTotal Marks: %.2f\n", total_marks);
//     printf("Average Marks: %.2f\n", average_marks);

//     return 0;
// }
