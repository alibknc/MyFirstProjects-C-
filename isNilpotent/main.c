#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int size = 3;

int isNilpotent(int fmatrix[size][size],int x)
{
    int i,j,a;

    for(i=0; i<x; i++)
    {
        a=0;
        for(j=0; j<x; j++)
        {
            a=(fmatrix[i][j]*fmatrix[j][i])+a;
        }
        if(a!=0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int size,i,j,result;
    srand(time(NULL));

    printf("Enter the size of the matrix:\n");
    scanf("%d",&size);

    int matrix[size][size];

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            int x=(-10)+rand()%20;
            matrix[i][j]=x;
        }
    }

    printf("\nGenerated matrix:\n");

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    result=isNilpotent(matrix,size);

    if(result==0)
    {
        printf("\nThe matrix is NOT nilpotent!");
    }
    else
    {
        printf("\nThe matrix is nilpotent.");
    }

}
