// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lower triangular matrix in C
/*
#include <iostream>
#include <stdlib.h>

struct Matrix
{
    int *A;
    int n;
};



void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[i * (i - 1) / 2 + j - 1] = x;
        //m->A[m->n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
        //uncomment for column major representation
    }
}

int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i * (i - 1) / 2 + j - 1];
        //return m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
        //uncomment for column major representation
    }
    else
        return 0;
}

void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <=m.n; i++)
    {
        for (j = 1; j <=m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);
                //printf("%d ", m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j]);
                //uncomment for column major representation
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    int i, j, x;
    //m.n = 4;

    //Set(&m, 1, 1, 5); Set(&m, 2, 2, 8); Set(&m, 3, 3, 9); Set(&m, 4, 4, 12);
    
    //printf("%d \n", Get(m, 2, 2));
    //Display(m);

    printf("Enter Dimension\n");
    scanf_s("%d", &m.n);
    m.A = (int*)malloc(m.n * (m.n - 1) / 2 * sizeof(int));

    printf("Enter all elements\n");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf_s("%d", &x);
            Set(&m, i, j, x);
        }
    }
    printf("\n\n");

    Display(m);

    return 0;
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
