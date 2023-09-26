#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Uso: %s m\n", argv[0]);
        return 1;
    }

    int m = atoi(argv[1]);

    if (m <= 0)
    {
        fprintf(stderr, "m debe ser un número entero positivo.\n");
        return 1;
    }

    int *album = (int *)malloc((m + 1) * sizeof(int));
    if (album == NULL)
    {
        fprintf(stderr, "Error de asignación de memoria.\n");
        return 1;
    }

    for (int i = 0; i <= m; i++)
    {
        album[i] = 0;
    }

    int contador = 0;

    int numero;
    while (scanf("%d", &numero) == 1)
    {
        if (numero >= 0 && numero <= m && album[numero] == 0)
        {
            album[numero] = 1;
            contador++;
            if (contador == m + 1)
            {
                break;
            }
        }
    }

    printf("Se necesitaron %d figuritas para completar el álbum.\n", contador);
    printf("Cantidad de cada figurita:\n");
    for (int i = 0; i <= m; i++)
    {
        printf("Figurita %d: %d\n", i, album[i]);
    }

    free(album);

    return 0;
}
