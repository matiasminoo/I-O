#include <stdio.h>

int main()
{
    int lineCount = 0;
    char ch;
    char prevCh = '\n';

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            if (prevCh != '\n')
            {
                lineCount++;
            }
        }
        prevCh = ch;
    }

    if (prevCh != '\n')
    {
        lineCount++;
    }

    printf("Cantidad de líneas: %d\n", lineCount);

    return 0;
}
