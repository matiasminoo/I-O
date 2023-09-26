#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    char *archivo = argv[1];

    fp = fopen(archivo, "r");

    if (fp == NULL)
    {
        printf("Ni ahi te abro el archivo cumpa\n");
        return 1;
    }

    int c;

    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    return 0;
}
