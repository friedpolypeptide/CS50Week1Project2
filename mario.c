#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask user for a positive integer height of the pyramid (y)
    int y = 0;
    while (y < 1 || y > 8)
    {
        y = get_int ("height of pyramid?\n");
    }
    
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < y - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        for (int j = 0; j < 2; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
