#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Uso: %s n m\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    if (n <= 0 || m <= 0)
    {
        fprintf(stderr, "n y m deben ser números enteros positivos.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        int numero = rand() % (m + 1);
        printf("%d ", numero);
    }

    return 0;
}
