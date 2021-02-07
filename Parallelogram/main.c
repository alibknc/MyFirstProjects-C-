#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line,i,j;

    printf("Enter the number of lines: ");
    scanf("%d",&line);

    for(i=1;i<=line;i++){
        if(i==1 || i==line){
            for(j=1;j<=line-i;j++){
            printf(" ");
            }
            for(j=1;j<=line;j++){
                printf("*");
            }
            printf("\n\n");
        }else{
            for(j=1;j<=line-i;j++){
                printf(" ");
            }
            printf("*");
            for(j=1;j<=line-2;j++){
                printf(" ");
            }
            printf("*\n\n");
        }
    }
    return 0;
}
