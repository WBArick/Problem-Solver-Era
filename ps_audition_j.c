#include<stdio.h>
int birthdayCakeCandles(int n, int candles[n]);
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = birthdayCakeCandles(n, arr);
    printf("%d", result);
}

int birthdayCakeCandles(int n, int candles[n])
{    
    int tall = candles[0];
    int i;
    for(i = 1; i < n; i++)
    {
        if(tall < candles[i])
        {
            tall = candles[i];
        }
    }
    int result = 0;
    for(i = 0; i < n; i++)
    {
        if(candles[i] == tall)
        {
            result++;
        }
    }
    return result;
}