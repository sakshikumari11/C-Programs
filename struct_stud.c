#include <stdio.h>

int main() {

    struct student {
        int roll;
        char name[20];
        int marks;
    };
    
   
    struct student s;
    
    
    printf("Enter Student Name: ");
    scanf("%s", s.name); 
    printf("Enter Student Roll: ");
    scanf("%d", &s.roll);
    printf("Enter Student Marks: ");
    scanf("%d", &s.marks);
    
    printf("\nRoll: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %d", s.marks);
    
    return 0;
}

