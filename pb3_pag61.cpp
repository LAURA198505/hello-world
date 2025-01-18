/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//pb3 pag 60  Să se scrie programul care realizează determinarea elementului maxim de pe fiecare linie și a elementului maxim dintr-o matrice dreptunghiulară de dimensiuni mxn.
#include <stdio.h>
#include <conio.h>
int main()

{
    int n, m, i, j, M;
    int a[100][100], max[100];
    printf("\nNr de linii= ");
    scanf("%d", &m);
    printf("\nNr de coloane= ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf(" %d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        max[i] = a[i][0];
        for (j = 0; j < n; j++)
            if (max[i] < a[i][j])
                max[i] = a[i][j];
    }
    M = max[0];
    for (i = 0; i < m; i++)
        if (M < max[i])
            M = max[i];
    for (i = 0; i < m; i++)
        printf("\n Maximul pe linia %d este = %d", i, max[i]);
    printf("\n Maximul este = %d", M);
    getch();
}
