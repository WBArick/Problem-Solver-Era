#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int i;
    for(i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a;
        int b;
        if(n <= 10)
        {
            a = n;
            b = n - a;
        }
        else if(n > 10)
        {
            a = 10;
            b = n - 10;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}