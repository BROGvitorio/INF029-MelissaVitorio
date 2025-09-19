#include <stdio.h>
#define MAX_CARS 50
#define QTD_INFOS 2

void printArray(int array[MAX_CARS][QTD_INFOS])
{
    int i, j;
    int empty = 0;

    for (i = 0; i < MAX_CARS && !empty; i++)
    {
        if (!array[i][0])
        {
            printf("FIM DA LISTA DE CARROS!!!\n");
            empty = 1;
        }
        else
        {
            printf("carro %d:\n", i + 1);
            for (j = 0; j < QTD_INFOS; j++)
            {
                switch (j)
                {
                case 0:
                    printf("  chassi - %d", array[i][j]);
                    break;

                case 1:
                    printf("  ano - %d\n", array[i][j]);
                    break;
                }
            }
        }
    }
}

int main()
{
    int array[MAX_CARS][QTD_INFOS] = {{1111, 2025}, {2222, 2024}};
    int i, j;
    int emptyy = 0;
    int chassi, year;

    printArray(array);

    for (i = 0; i < MAX_CARS && !emptyy; i++)
    {
        if (!array[i][0])
        {
            emptyy = 1;
        }
        printf("\n%d\n", i);
    }

    printf("\n%d\n", i);
    chassi = 3333;
    year = 2023;
    for (j = 0; j < QTD_INFOS; j++)
    {
        switch (j)
        {
        case 0:
            array[i][j] = chassi;
            printf("\n%d--%d--%d\n", i, j, array[i][j]);
            break;

        case 1:
            array[i][j] = year;
            printf("\n%d--%d--%d\n", i, j, array[i][j]);
            break;
        }
    }

    printf("\n%d\n%d", array[2][0], array[2][1]);

    return 0;
}