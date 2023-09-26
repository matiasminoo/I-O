#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    if (argc != 4)
    {
        printf("Uso: %s <a> <b> <n>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int n = atoi(argv[3]);

    for (int i = 0; i < n; i++)
    {
        int random = rand() % (b - a) + a;
        printf("%d ", random);
    }

    return 0;
}
