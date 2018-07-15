#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get array size
    int size;
    do
    {
        size = get_int("enter array size b/w 1 and 10 inclusive: ");
    }
    while (size < 1 || size > 10);

    //make array
    int counting[size];
    for (int i = 0; i < size; i++)
    {
        counting[i] = i;
    }

    //print array
    for (int i = 0; i < size; i++)
    {
        printf("%i ", counting[i]);
    }
    printf("\n");

}