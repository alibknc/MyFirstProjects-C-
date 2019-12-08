#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    float weight;
    float index;

    printf("Please enter your height (cm): ");
    scanf("%f",&height);

    printf("Please enter your weight (kg): ");
    scanf("%f",&weight);

    index = weight/((height/100)*(height/100));
    printf("Your body mass index: %f\n",index);

    if(index<=18.5){
            printf("Too weak\n");
    }else{
        if(index>18.5 && index<=25){
                printf("Normal weight\n");
        }else{
            printf("High weight\n");
            }
        }
    return 0;
}
