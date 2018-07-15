#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
        string n = get_string("input: ");

    printf("output: ");
    for (int i = 0, c = strlen(n); i < c; i++)
    {
        printf("%c", toupper(n[i]));
    }
    printf("\n");
}