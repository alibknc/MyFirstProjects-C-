#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trm1, trm2, finaltrm, difference, number;

    printf("Please enter first term: ");
    scanf("%d",&trm1);

    printf("Please enter second term: ");
    scanf("%d",&trm2);

    printf("Please enter final term: ");
    scanf("%d",&finaltrm);

    difference = trm2-trm1;

    number = ((finaltrm-trm1)/difference)+1;

    printf("Number of terms: %d\n",number);

    return 0;
}
