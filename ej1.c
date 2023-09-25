#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Ingrese un numero entero n:\n");
    int n = atoi(argv[1]);
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        if (scanf("%d", &num) == 1)
        {
            suma += num;
        }
        else
        {
            printf("Entrada inválida. Debes ingresar un número entero.\n");
            return 1;
        }
    }

    printf("La suma de los %d enteros ingresados es: %d\n", n, suma);

    return 0;
}
