#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for x
    float x = get_float("x: ");

    //prompt user for y
    float y = get_float("y: ");

    //do math
    printf("%f plus %f equals %f\n", x, y, x+y);
    printf("%f minus %f equals %f\n", x, y, x-y);
    printf("%f times %f equals %f\n", x, y, x*y);
    printf("%f divided by %f equals %f\n", x, y, x/y);
    printf("the remainder of %f divided by %f is %i\n", x, y, x % y);
}