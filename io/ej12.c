#include <stdio.h>

int main()
{
    int opcion;

    while (1)
    {
        printf("Porno interactivo:\n");
        printf("1. Dedearla\n");
        printf("2. Anal\n");
        printf("3. Pete\n");
        printf("4. Chupada de concha\n");
        printf("5. Metersela\n");
        printf("6. Salir\n");
        printf("Elija una opción: ");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ha elegido la dedearla.\n");
            break;
        case 2:
            printf("Ha elegido la Anal.\n");
            break;
        case 3:
            printf("Ha elegido la Pete.\n");
            break;
        case 4:
            printf("Ha elegido la Chupada de concha.\n");
            break;
        case 5:
            printf("Ha elegido la Metersela.\n");
            break;
        case 6:
            printf("Saliendo del programa.\n");
            return 0;
        default:
            printf("Opción no válida. Intente de nuevo.\n");
        }
    }

    return 0;
}
