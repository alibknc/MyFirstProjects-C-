#include <stdio.h>
#include <stdlib.h>

int main() {
    int step,result;
    int number;

    printf("Enter an integer: ");
    scanf("%d",&number);

    step=1;
    result=1;

    while(step<=number){
        result=result*step;
        step=step+1;
    }
    printf("%d!= %d",number,result);

    return 0;
}
