#include <stdio.h>

int f(int x)
{
    return 15 - x;
}

int g(int x)
{


    return y;
}

int h(int x)
{
    return x;
}

int main()
{
    for (int i = 0; i < 16; i++)
    {
        if (i && i % 4 == 0)
        {
            printf("\n");
        }
        printf("%x", f(i));
    }
    printf("\n\n");

    for (int i = 0; i < 16; i++)
    {
        if (i && i % 4 == 0)
        {
            printf("\n");
        }
        printf("%x", g(i));
    }
    printf("\n\n");

    for (int i = 0; i < 16; i++)
    {
        if (i && i % 4 == 0)
        {
            printf("\n");
        }
        printf("%x", h(i));
    }
    printf("\n\n");

    return 0;
}
