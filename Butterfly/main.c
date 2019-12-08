#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++){
            for(j=1;j<=i;j++){
                    printf("X");
            }
            for(j=1;j<=9-2*i;j++){
                    printf(" ");
            }
            for(j=1;j<=i;j++){
                    if(i==5){
                        for(j=1;j<=4;j++){
                            printf("X");
                        }
                        break;
                    }else
                        printf("X");
            }
            printf("\n");
    }
    for(i=1;i<=4;i++){
            for(j=1;j<=5-i;j++){
                    printf("X");
            }
            for(j=1;j<=2*i-1;j++){
                    printf(" ");
            }
            for(j=1;j<=5-i;j++){
                    printf("X");
            }
            printf("\n");
    }
    return 0;

}
