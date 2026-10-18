#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int j;
        long long product = 1;
        for(j = 1; j <= a; j++)
        {
            product = product * j;
        }
        printf("%lld\n", product);
    }
    return 0;
}