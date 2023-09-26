#include <stdio.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    int num;

    printf("Ingresa numero enteros(ctrl+d para terminar):\n");
    while (scanf("%d", &num) != EOF)
    {
        suma += num;
    }

    printf("La suma de los numeros ingresados es: %d\n", suma);
    return 0;
}
