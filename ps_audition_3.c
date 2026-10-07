#include<stdio.h>
int main(void)
{
    long long arr[100];
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n%lld", sum);
    return 0;
}