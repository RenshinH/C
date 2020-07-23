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
        if (line[i] == '\\' && line[i+1] == '\\')
        {
            while (line[i] != '\n') {i++;}
            i++;
        }
        printf("%c", line[i]);
    }
}

int main()
{

    read();
    print();

    return 0;
}
