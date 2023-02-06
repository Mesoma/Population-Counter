#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // To Prompt for start size
    int s;
    do
    {
        s  = get_int("Population Start Size:  ");
        if (s < 9)
        {
            printf("Number must be greater than 8\n");
        }
    }
    while (s < 9);

    // To Prompt for end size
    int e;
    do
    {
        e  = get_int("Population End Size:  ");
        if (e <= s)
        {
            printf("End Size must be greater than start size\n");
        }
    }
    while (e <= s);

    // To Calculate number of years until we reach threshold
    int a;
    int n = 0;

    a = (s / 3) - (s / 4);

    while (s < e)
    {
        s = s + a;
        n++;
    }

    // To Print number of years
    printf("Number of years: %i\n", n);
}
