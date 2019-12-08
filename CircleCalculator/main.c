#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float area;
    float perimeter;

    printf("Please enter the radius of circle: ");
    scanf("%f",&r);

    area = 3.14*r*r;
    perimeter = 2*3.14*r;

    printf("Area of circle: %f\n",area);
    printf("Perimeter: %f\n",perimeter);

    if (area>perimeter){
        printf("Area of circle is bigger than its perimeter\n");
    }else{
        if (area<perimeter){
            printf("Area of circle is smaller than its perimeter");
        }else{
            printf("Area of circle is equal to its perimeter\n");
        }
    }

    return 0;
}
