#include <stdio.h>

int main()
{
    int contador = 0;
    int c;

    printf("Ingresa caracteres (Ctrl+D):\n");

    while ((c = getchar()) != EOF)
    {
        contador++;
    }

    printf("Cantidad de caracteres ingresados: %d\n", contador);

    return 0;
}
