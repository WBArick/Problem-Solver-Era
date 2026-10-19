#include<stdio.h>
int main(void)
{
    int n;
    int k;
    int count = 0;
    scanf("%d %d", &n, &k);
    int i;
    int a;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a % k == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}