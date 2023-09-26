#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen("a.txt", "r");

    if (fp == NULL)
    {
        printf("No tiene nada adentro ñeri\n");
        return 1;
    }

    int c;

    while ((c = fgetc(fp)) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            putchar(c);
        }
    }

    fclose(fp);
    return 0;
}
