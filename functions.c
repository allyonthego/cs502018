#include <cs50.h>
#include <stdio.h>

//declare function
bool valid_triangle(float a, float b, float c);

int main(void)
{
        //get side lengths
    float x = get_float("first side length: ");
    float y = get_float("second side length: ");
    float z = get_float("third side length: ");

    //print result
    if (valid_triangle(x, y, z) == true)
    {
        printf("True \n");
    }
    else if (valid_triangle(x, y, z) == false)
    {
        printf("False \n");
    }
}

bool valid_triangle(float a, float b, float c)
{
    //check no negative sides
    if ((a <= 0) || (b <= 0) || (c <= 0))
    {
        return false;
    }

    //check no side greater than sum of other two
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return false;
    }

    //otherwise, passed test
    return true;
}