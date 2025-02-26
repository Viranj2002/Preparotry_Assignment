#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bubblesort(char arr[10][50]){
for (int i = 0; i < 9; i++)
{
    for(int j =0;j<10-i-1;j++){
        if (strcmp(arr[j],arr[j+1]) > 0 )
        {
            char temp[50];
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
        }
        
    }
}

}

int main()
{

    char nameOfStudents[10][50];
    printf("Enter the 10 names outputs: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",&nameOfStudents[i]);
    }
    bubblesort(nameOfStudents);
    printf("The sorted array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n",nameOfStudents[i]);
    }
    
    return 0;
}
