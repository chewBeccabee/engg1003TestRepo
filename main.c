#include <stdio.h>


int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); // %f is float datatype, stores fractional numbers
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
