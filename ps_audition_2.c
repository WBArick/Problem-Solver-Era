#include<stdio.h>
int simpleArraySum(int ar[], int n);
int main(void)
{
    int n;
    int i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = simpleArraySum(arr, n);
    printf("%d", sum);
    return 0;
}
int simpleArraySum(int ar[], int n)
{
    int total = 0;
    int j;
    for(j = 0; j < n; j++)
    {
        total = total + ar[j];
    }
    return total;
}