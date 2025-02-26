#include <stdio.h>
#define MAX 50


int main() {
    int mat1[MAX][MAX],mat2[MAX][MAX];
    int aCol , aRow, bCol , bRow;

    printf("Enter the no of rows and colunms for a ");
    scanf("%d%d",&aRow,&aCol);

    printf("Enter the elements of a ");
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < aCol; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        
    }

    printf("Enter the no of rows and colunms for b ");
    scanf("%d%d",&bRow,&bCol);

    if (aCol != bRow)
    {
        printf("Matrix multiplication is not possible ");
        return 1;
    }
    else
    {
        printf("Enter the elements of b ");
        for (int i = 0; i < bRow; i++)
        {
            for (int j = 0; j < bCol; j++)
            {
                scanf("%d",&mat2[i][j]);
            }
            
        }   
    }
    
    int product[MAX][MAX];
    int sum = 0;
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < bCol; j++)
        {
            for (int k = 0; k < bRow ; k++)  //here we can take bRow or aCol
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
        
    }

    printf("The resultant matrix is \n");
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < bCol; j++)
        {
            printf("%4d",product[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
