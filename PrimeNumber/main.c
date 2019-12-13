#include <stdio.h>
#include <stdlib.h>

int main () {
    int j,i;

    printf("Enter an integer: ");
    scanf("%d",&i);

    for(j = 2;j<=(i/j);j++){
        if(!(i%j)){
            break;
        }
    }
    if(j>(i/j)){
        printf("%d prime number\n",i);
    }else{
        printf("%d not prime number\n",i);
    }
    return 0;
}
