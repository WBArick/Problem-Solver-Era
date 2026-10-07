#include<stdio.h>
#include<stdlib.h>
int diagonalDifference(int n, int arr[n][n]);
int main(void)
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int sum = diagonalDifference(n , ar);
    printf("%d\n", sum);
    return 0;
}

int diagonalDifference(int n, int arr[n][n])
{
    int prim = 0;
    int sec = 0;
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                prim = prim + arr[i][j];
            }    
        }
        sec = sec + arr[i][n - 1 - i];    
    }
    int diff = 0;
    diff = abs(prim - sec);
    return diff;
}