#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    float median,avr;

    printf("How many numbers will you enter?: ");
    scanf("%d",&N);

    int array[N];

    for(i=0;i<N;i++){
        printf("Enter the %d. number: ",i+1);
        scanf("%d",&array[i]);
    }

    sorting(array,N);

    for(i=0;i<N;i++){
        printf("%d ",array[i]);
    }

    median=array[(N-1)/2];
    avr=(array[(N/2)-1] + array[N/2])/2.0;

    if(N%2==1){
        printf("\nMedian value: %f ",median);
    }else{
        printf("\nMedian value: %f ",avr);
    }

}

void sorting(int d[],int N)
{
    int i,j,smallestIndex;

    for(i=0;i<N;i++){
        smallestIndex=i;
        for (j=i+1;j<=N;j++){
            if(d[j]<d[smallestIndex]){
                smallestIndex=j;
            }
        }
        int tmp=d[i];
        d[i]=d[smallestIndex];
        d[smallestIndex]=tmp;
    }
}
