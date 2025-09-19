#include <stdio.h>
#define MAX_CARS 50
#define QTD_INFOS 2

void printArray(int array[MAX_CARS][QTD_INFOS])
{
    int i, j;
    int empty = 0;

    for (i = 0; i < MAX_CARS && !empty; i++)
    {
        if (!array[0][0]) {
            printf("Não há carros na lista!");
        } else if (!array[i][0]) {
            printf("FIM DA LISTA DE CARROS!!!\n");
            empty = 1;
        }
        else {
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

void addCar(int array[MAX_CARS][QTD_INFOS], int chassi, int year) {
    int i, j;
    int empty = 0;
    
    for (i = 0; i < MAX_CARS && !empty; i++)
    {
        if (!array[i+1][0])
        {
            empty = 1;
        }
    }

    for (j = 0; j < QTD_INFOS; j++)
    {
        switch (j)
        {
        case 0:
            array[i][j] = chassi;
            break;

        case 1:
            array[i][j] = year;
            break;
        }
    }
}

int main()
{
    int cars[MAX_CARS][QTD_INFOS] = {{1111, 2025}, {2222, 2024}};

    printArray(cars);

    addCar(cars, 3333, 2023);
    addCar(cars, 4444, 2022);

    printArray(cars);

    return 0;
}
