#include<stdio.h>
#include<stdlib.h>


struct emp{
    char firstName[20];
    char lastName[20];
    double salary; 
    
};

void emp_init(struct emp* e){
    printf("Enter the first name: ");
    scanf("%s",e->firstName); 
    
    printf("Enter the last name: ");
    scanf("%s",e->lastName);
    
    printf("Enter the salary: ");
    scanf("%lf",&e->salary);  
}

void set_salary(struct emp *e, double sal){
    e->salary = sal ;
}

void emp_display(struct emp *e){
    printf("The first name is %s\n: ",e->firstName);
    printf("The last name is %s\n: ",e->lastName);
    printf("The salary is: %lf\n",e->salary*12) ;
} 

int main(){
    struct emp emp1 ,emp2;
    printf("The details of first employee is ");
    emp_init(&emp1);

    printf("The details of second employee is ");
    emp_init(&emp2);

    set_salary(&emp1,emp1.salary*1.10);
    set_salary(&emp2,emp2.salary*1.10);

    printf("after raise the salary is ");

    emp_display(&emp1);
    emp_display(&emp2); 

    return 0;

}
    
