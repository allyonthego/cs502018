#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    int k;

    //check key entered
    if (argc == 2)
    {
        //get key
        k = atoi(argv[1]);

        //get plaintext
        string plntxt = get_string("plaintext: ");

        //encipher plaintext
        int len = strlen(plntxt);
        char cphrtxt[len];

        for (int i = 0; i < len; i++)
        {
            if (isalpha(plntxt[i]))
            {
                if (isupper(plntxt[i]))
                {
                    char cphr = 65 + (plntxt[i] - 65 + k)%26;
                    cphrtxt[i] = cphr;
                }
                else if (islower(plntxt[i]))
                {
                    char cphr = 97 + (plntxt[i] - 97 + k)%26;
                    cphrtxt[i] = cphr;
                }
            }
            else
            {
                cphrtxt[i] = plntxt[i];
            }
        }

        //print ciphertext
        printf("ciphertext: ");
        for (int i = 0; i < len; i++)
        {
            printf("%c", cphrtxt[i]);
        }
        printf("\n");

        return 0;
    }
    else
    {
        return 1;
    }
}