#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string n = get_string("input: ");

    printf("output: ");
    for (int i = 0, c = strlen(n); i < c; i++)
    {
        if (n[i] >= 'a' && n[i] <= 'z')
        {
            printf("%c", n[i] - ('a'-'A'));
        }
        else
        {
            printf("%c", n[i]);
        }
    }
    printf("\n");
}