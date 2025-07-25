#include <stdio.h>
struct student {
    char name[50];
    int class;
    int roll_no;
    int marks[5]; 
    int total;
};

int main() {
    struct student stu_list[30];
    int i, j;
    float class_average = 0;

    
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", stu_list[i].name);
        printf("Class: ");
        scanf("%d", &stu_list[i].class);
        printf("Roll No: ");
        scanf("%d", &stu_list[i].roll_no);
        printf("Enter marks for 5 subjects:\n");
        stu_list[i].total = 0;
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &stu_list[i].marks[j]);
            stu_list[i].total += stu_list[i].marks[j];
        }
        class_average += stu_list[i].total;
    }

    class_average /= 3;
    for (i = 0; i < 3; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", stu_list[i].name);
        printf("Class: %d\n", stu_list[i].class);
        printf("Roll No: %d\n", stu_list[i].roll_no);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%d ", stu_list[i].marks[j]);
        }
        printf("\nTotal: %d\n", stu_list[i].total);
        float average_marks = stu_list[i].total / 5.0;
        printf("Aggregate Grade: %.2f\n", average_marks);
    }

    
    printf("\nClass Average Marks: %.2f\n", class_average);

    return 0;
}