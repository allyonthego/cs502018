#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string n = get_string("input: ");

    printf("output: ");
    for (int i = 0; i < strlen(n); i++)
    {
        printf("%c %i ", n[i], (int) n[i]);
    }
    printf("\n");
}