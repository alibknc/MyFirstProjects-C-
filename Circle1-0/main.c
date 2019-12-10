#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,i,j;

    printf("Please enter number of rows: ");
    scanf("%d",&row);

    printf("Please enter number of columns: ");
    scanf("%d",&column);

    for(i=1;i<=row;i++){
        if(i==1 || i==row){
            printf("0");
            for(j=1;j<=column-2;j++){
                printf("1");
            }
            printf("0\n");
        }else{
            printf("1");
            for(j=1;j<=column-2;j++){
                printf("0");
            }
            printf("1\n");
        }
    }
    return 0;
}
