#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int i;
    for(i = 0; i < t; i++)
    {
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        if(a + b + c == 180)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}