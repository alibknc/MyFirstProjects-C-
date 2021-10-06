#include <stdio.h>

void main()
{
    int N;
    printf("Enter matrix size: ");
    scanf("%d",&N);
    int matrix[N][N];

    int i,j;

    for(i=0; i<N; i++){
        matrix[i][N-1-i]=1;
    }

    for(i=0; i<N; i++){
        for(j=0; j<N-1-i; j++){
            matrix[i][j]=2;
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<i; j++){
            matrix[i][N-1-j]=3;
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }

}
