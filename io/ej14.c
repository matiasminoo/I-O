#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *origen = fopen(argv[1], "rb");

    if (origen == NULL)
    {
        perror("Ni ahi te abro el archivo, negro\n");
        return 1;
    }
    FILE *destino = fopen(argv[2], "wb");
    if (destino == NULL)
    {
        perror("Error al abrir el archivo de destino");
        fclose(origen);
        return 1;
    }
    char buffer[4096];
    size_t bytes_leidos;

    while ((bytes_leidos = fread(buffer, 1, sizeof(buffer), origen)) > 0)
    {
        size_t bytes_escritos = fwrite(buffer, 1, bytes_leidos, destino);
        if (bytes_escritos != bytes_leidos)
        {
            perror("Error al escribir en el archivo de destino");
            fclose(origen);
            fclose(destino);
            return 1;
        }
    }

    fclose(origen);
    fclose(destino);
    printf("Archivo copiado con éxito.\n");

    return 0;
}
