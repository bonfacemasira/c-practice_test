#include <stdio.h>

int some_function(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return(i);
}

int main(void)
{
    some_function();
    int i;

    i = -9;
    while (i < 0)
    {
        printf("%d", -i);
        i++;
    }

    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d", i % 2);
        i++;
    }

    int i;

    i = 9;
    while (--i)
    {
        printf("%d", i);
    }

        for (i = 48; i < 58; i++)
        {
            printf("%c", i);
        }
    for (i = 0; i < 10; i++)
    {
        printf("%d", i * 2);
    }

    int i;

    i = 9;
    while (i--)
    {
        printf("%d", i);
    }
    int i;

    i = 0;
    while (i < 10)
    {
        i++;
        printf("%d", i / 2);
    }
}
