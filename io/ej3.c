#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingresa UN numero entero:\n");
    scanf("%d", &n);

    int suma = 0;

    printf("Ingresa %d enteros separados por espacios:\n", n);
    for (int i = 0; i < n; i++)
    {
        int num;
        if (scanf("%d", &num) == 1)
        {
            suma += num;
        }
        else
        {
            printf("Esta mal pelotudo, te dije %d enteros\n", n);
            return 1;
        }
    }
    printf("La suma de los enteros es: %d\n", suma);
    return 0;
}
