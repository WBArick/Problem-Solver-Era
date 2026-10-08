#include<stdio.h>
void plusMinus(int n, int arr[n]);
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    int arr[n];
    for(i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    plusMinus(n, arr);
    return 0;
}

void plusMinus(int n, int arr[n])
{
    int i;
    int plusCount = 0;
    int minusCount = 0;
    int zeroCount = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            plusCount++;
        }
        else if(arr[i] < 0)
        {
            minusCount++;
        }
        else if(arr[i] == 0)
        {
            zeroCount++;
        }
    }
    double plusRatio = 0;
    double minusRatio = 0;
    double zeroRatio = 0;
    plusRatio = ((double)plusCount/n);
    minusRatio = ((double)minusCount/n);
    zeroRatio = ((double)zeroCount/n);
    printf("%.6f\n%.6f\n%.6f\n", plusRatio, minusRatio, zeroRatio);
}