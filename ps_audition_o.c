#include<stdio.h>
int main(void)
{
    int a, b;
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if(a > b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}