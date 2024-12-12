#include <stdio.h>

int main() {
    struct student {
        int roll;
        char name[20];
        int marks;
    };

    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter Student Name: ");
        scanf("%s", s[i].name); 
        printf("Enter Student Roll: ");
        scanf("%d", &s[i].roll); 
        printf("Enter Student Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %d\n", s[i].marks);
    }

    return 0;
}

