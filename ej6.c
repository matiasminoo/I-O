#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int n;
    printf("Ingresa tu numero arbitrario:\n");
    while (1)
    {
        if (scanf("%d", &n) == EOF)
        {
            break;
        }
        if (n >= a && n <= b)
        {
            printf("%d esta en el intervalo [%d, %d]\n", n, a, b);
        }
        else
        {
            printf("%d no esta en el intervalo [%d, %d]\n", n, a, b);
        }
    }

    return 0;
}
