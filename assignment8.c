#include<stdio.h>
#include<stdlib.h>


struct student{
    char name[20];
    char rollno[20];
    float marks;
    
};

int main()
{
    struct student s1= {"viranj","viranj123",90.20};
    struct student s2;

    printf("Enter the details for student 1");
    scanf("%s%s%f",&s2.name,&s2.rollno,&s2.marks);
    
    printf("The details of student 1 is ");
    printf("%s   %s   %.2f \n",s1.name,s1.rollno,s1.marks);
  
    printf("The details of student 2 is ");
    printf("%s   %s   %.2f",s2.name,s2.rollno,s2.marks);

    return 0;
}
