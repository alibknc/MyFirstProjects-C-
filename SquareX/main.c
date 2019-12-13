#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edge,i,j;

    printf("Enter an edge length of the square: ");
    scanf("%d",&edge);

    for(i=1;i<=(edge+1)/2;i++){
        for(j=1;j<=(i-1);j++){
            printf(" ");
        }
        printf("*");
        for(j=1;j<=(edge-2*i);j++){
            printf(" ");
        }
        if(i==(edge+1)/2){
            printf("\n");
            break;
        }
        printf("*\n");
    }
    for(i=1;i<=(edge-1)/2;i++){
        for(j=1;j<=((edge-1)/2)-i;j++){
            printf(" ");
        }
        printf("*");
        for(j=1;j<=(2*i-1);j++){
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
