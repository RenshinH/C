#include <stdio.h>
#define MAX 1000

char line[MAX];

void read()
{
    char c;
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        line[i] = c;
        i++;
    }
}

void print()
{
    int i;
    int y = 0;

    for (i = 0; line[i] != '\0'; i++)
    {
        if(i%80 == 79)
        {
            while (line[i] != ' ' && line[i] != '\t' && y < 8)
            {
                printf("%c", line[i]);
                i++;
                y++;
            }

            if (y == 8 && line[i+2] != ' ')
            {
                putchar('-');
                putchar('\n');
                printf("%c", line[i]);
            }

            else
            {
                putchar('\n');
                i++;
                printf("%c", line[i]);
            }
        }
        else
        {
            printf("%c", line[i]);
        }
    }
}


int
main()
{

    read();
    print();

    return 0;
}
