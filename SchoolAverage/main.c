#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("CALCULATION OF THE HIGH SCHOOL CLASS AVERAGE\n");

    float trk, mat, chm, phy, hst, eng, phe, ger, rlg, art, bio, opt1;
    float average;

    printf("Enter Your Grades: \n");

    printf("Turkish: ");
    scanf("%f",&trk);

    printf("Math: ");
    scanf("%f",&mat);

    printf("Chemistry: ");
    scanf("%f",&chm);

    printf("Physic: ");
    scanf("%f",&phy);

    printf("History: ");
    scanf("%f",&hst);

    printf("English: ");
    scanf("%f",&eng);

    printf("Physical Education: ");
    scanf("%f",&phe);

    printf("German: ");
    scanf("%f",&ger);

    printf("Religion: ");
    scanf("%f",&rlg);

    printf("Art: ");
    scanf("%f",&art);

    printf("Biology: ");
    scanf("%f",&bio);

    printf("Optional 1: ");
    scanf("%f",&opt1);

    average=((trk*5)+(mat*6)+(chm*4)+(phy*4)+(hst*3)+(eng*4)+(phe*2)+(ger*2)+(rlg*2)+(art*2)+(bio*4)+(opt1*1))/39.0;

    printf("Your average: %f\n",average);

    if(average>=85){
        printf("Congratulations! Received Certificate of Appreciation\n");
    }else if(average >=70 && average <85){
        printf("You received a certificate of appreciation\n");
    }else if(average<50){
        printf("Sorry, You remained class:(\n");
    }else if(average>=50 && average<70){
        printf("You passed straight");
    }

    return 0;
}
