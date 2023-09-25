#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));

    int num = (rand() % 1000) + 1;

    int intentos_maximos = 10;
    int intentos = 0;
    int adivinanza;

    printf("Adivina el numero entre 1 y 1000!!!, tenes %d intentos.\n", intentos_maximos);
    while (intentos < intentos_maximos)
    {
        printf("Intento %d: Ingresa tu adivinanza: ", intentos + 1);
        char input[20];
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d", &adivinanza) != 1 || adivinanza < 1 || adivinanza > 1000)
        {
            printf("Por favor, ingresa un número válido entre 1 y 1000.\n");
            continue;
        }

        if (adivinanza == num)
        {
            printf("¡Felicidades! Adivinaste el número %d en %d intentos.\n", num, intentos + 1);
            break;
        }
        else if (adivinanza < num)
        {
            printf("El número es mayor que %d.\n", adivinanza);
        }
        else
        {
            printf("El número es menor que %d.\n", adivinanza);
        }

        intentos++;
    }

    if (intentos == intentos_maximos)
    {
        printf("¡Agotaste tus %d intentos! El número correcto era %d.\n", intentos_maximos, num);
    }

    return 0;
}
