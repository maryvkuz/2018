#include <stdio.h>

#include "dk_tool.h"                                                  

int main()
{
    int i = 0, j = 0;
    int size = 0;

    printf("Enter size of your matrix:\n");                            //Please, choose your size matrix
    scanf("%i", &size);

    int matrixA[size][size];        
    int matrixB[size][size];                                               
    int matrixC[size][size];		  

    printf("\nEnter first matrix:\n\n");

    for(i = 0; i < size; i++)                                             //Cykl for first matrix
    {
        for(j = 0; j < size; j++)
        {
            printf("Please, enter matrixA[%i][%i]:  ", i, j);
            scanf("%i", &matrixA[i][j]);
        }
    }

    printf("\n\nEnter second matrix:\n\n");

    for(i = 0; i < size; i++)                                             //Cykl for second matrix
    {
        for(j = 0; j < size; j++)
        {
            printf("Please, enter matrixB[%i][%i]:  ", i, j);
            scanf("%i", &matrixB[i][j]); // NOLINT
        }
    }

    RezultMatrix(size, matrixC, matrixA, matrixB);                   //funkciya dlya vidimannya matric

    printf("Rezultat: \n\n");


    for(i = 0; i < size; i++)                                            //cykl for dlya vyvedennya pershoyi matrici
    {
        for(j = 0; j < size; j++)
        {
            printf("%i	", matrixA[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        
    for(i = 0; i < size; i++)                                           //cykl for dlya vyvedennya drugoyi matrici
    {
        for(j = 0; j < size; j++)
        {
            printf("%i	", matrixB[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        
    for(i = 0; i < size; i++)                                           //cykl for dlya vyvedennya resultuyuchoyi matrici
    {
        for(j = 0; j < size; j++)
        {
            printf("%i	", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}