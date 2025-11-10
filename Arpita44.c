//WAP to create a user defined data type named Student using structures.
#include<stdio.h>
struct student {
    char name[50];
    int rollno;
    float marks;
    };
int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter roll number: ");
    scanf("%d",&s1.rollno);
    printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n",s1.name);
    printf("Roll Number:%d\n",s1.rollno);
    printf("Marks:%.2f\n",s1.marks);
    return 0;
}