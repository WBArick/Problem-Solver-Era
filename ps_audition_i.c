#include<stdio.h>
void miniMaxSum(int arr[5]);
int main(void)
{
    int arr[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    miniMaxSum(arr);
    return 0;
}

void miniMaxSum(int arr[5])
{
    int min = arr[0];
    int max = arr[0];
    int i;
    for(i = 1; i < 5; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    long long minSum = 0;
    long long maxSum = 0;
    long long sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    minSum = sum - max;
    maxSum = sum - min;
    printf("%lld %lld", minSum, maxSum);
}