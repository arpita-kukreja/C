//WAP to create an array of students if student is a data type created using structures.
#include<stdio.h>
struct student {
    char name[50];
    int rollno;
    float marks;
    };
int main()
{
    struct student students[3];
    for(int i=0;i<3;i++) 
    {
      printf("Enter details of student %d:\n",i+1);
      printf("Enter name: ");
      scanf("%s",students[i].name);
      printf("Enter roll number: ");
      scanf("%d",&students[i].rollno);
      printf("Enter marks:");
      scanf("%f",&students[i].marks);
    }
    printf("\nStudent Details:\n");
    for(int i=0;i<3;i++) 
    {
      printf("Student %d:\n",i+1);
      printf("Name: %s\n",students[i].name);
      printf("Roll Number:%d\n",students[i].rollno);
      printf("Marks:%.2f\n",students[i].marks);
    }
    return 0;
 }