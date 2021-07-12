#include <stdio.h>

int main(void) {

    // Declare variables
    int grade[5], g, class_num[9], c;
    char name[24], n;
    float GPA=0.0, grade_point=0.0, result=0.0;

    // Input student names implying amount of students
    for(n=0; n<25; n++) {
        scanf(" %s", &name[n]);
        printf("Please enter student names: %s.", name[n]);

        // Input number of classes
        for(c=0; c<10; c++) {
            scanf(" %d", &class_num[c]);
            printf("Please enter amount of classes (max.10): %d", class_num[c]);

            // Input grades
            for(g=0; g<=class_num; g++) {
                scanf(" %d", &grade[g]);
                printf("Please enter students' grades: %d.", grade[g]);
            }

            // Conversion of grades
            if (grade == "A"){
                grade_point = 4.0;
            }
            if (grade == "B"){
                grade_point = 3.0;
            }
            if (grade == "C")
            {
                grade_point =2.0;
            }
            if (grade == "D"){
                grade_point = 1.0;
            }
            if (grade == "F"){
                grade_point = 0.0;
            }

            // Formula to calculate GPA
            result += grade_point[g];
            GPA = result/class_num[c];
        }
    }

    // Print user input and results in a table
    printf(“\n Student name \t Grades \t GPA”);
    for(n=0; n<25; n++) {
        printf(“ %s \t %d \t %f”, name[n], grade[g], GPA);
    }
    return 0;
}
