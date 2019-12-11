#include <stdio.h>
#include <stdlib.h>

int exponentiation(int x,int y)
{
    int result=1,i;
    if(y==0){
        result=1;
    }else{
        for(i=1;i<=y;i++){
            result=x*result;
        }
    }
    return result;
}

int SeriesCalculation(int a,int b,int c)
{
    int i,sub_total=0,grand_total=0;

    for(i=0;i<=c-1;i++){
        sub_total=(1+exponentiation(a,i))*(1+exponentiation(b,i));
        printf("%d + ",sub_total);
        grand_total=grand_total+sub_total;
        }
    return grand_total;
}

int main()
{
    int a,b,c,screen;

    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    printf("c:");
    scanf("%d",&c);

    screen=SeriesCalculation(a,b,c);
    printf("\nToplam Sonuc: %d",screen);

    return 0;
}
