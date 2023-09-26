#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int num;
    int suma = 0;
    printf("Ingresa %d enteros:\n", n);
    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num == 0)
            {
                break;
            }
            suma += num;
        }
        else
        {
            printf("Entrada inválida. Debes ingresar un número entero.\n");
            return 1;
        }
    }
    printf("La suma de los numeros es: %d\n", suma);
    return 0;
}
