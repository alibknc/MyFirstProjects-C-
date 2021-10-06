#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float b;
    char array[100];

    for(i=1; i<=100; i++){
        b=i*1.0;
        if(isPrime(i)==1){
            sprintf(array,"|%3d(Prime )| ...^^... |%5d|..>>..|%9.4f|\n",i,i*i,b*b);
            printf("%s",array);
        }else if(isPrime(i)==0){
            if(SingleDouble(i)==1){
                sprintf(array,"|%3d(Double)| ...><... |%5d|..>>..|%9.3f|\n",i,i*2,b*2);
                printf("%s",array);
            }else if(SingleDouble(i)==0){
                sprintf(array,"|%3d(Single)| ...//... |%5d|..>>..|%9.2f|\n",i,i/2,b/2);
                printf("%s",array);
            }
        }
    }
}

int SingleDouble(int x)
{
    if(x%2==0){
        return 1;
    }else if(x%2==1)
        return 0;
}

int isPrime(int x)
{
    int j;
    if(x==1) return 0;
        for(j = 2; j <= (x/j); j++)
            if(!(x%j)) break;
        if(j > (x/j)) return 1;
    return 0;
}
