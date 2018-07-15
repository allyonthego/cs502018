#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompt user for dollars
    float n;
    do
    {
        n = get_float("Dollars owed: ");
    }
    while (n <= 0);

    //calculate change
    n = n * 100;
    n = round(n);
    int c = 0;

    while (n >= 25)
    {
        n -= 25;
        c += 1;
    }

    while (n >= 10)
    {
        n -= 10;
        c += 1;
    }

    while (n >= 5)
    {
        n -= 5;
        c += 1;
    }

    while (n >= 1)
    {
        n -= 1;
        c += 1;
    }

    //print number of coins
    printf("%i \n", c);
}