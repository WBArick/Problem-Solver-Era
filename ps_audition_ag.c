#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int i;
    for(i = 1; i <= t; i++)
    {
        int a;
        int b;
        scanf("%d %d", &a, &b);
        int time = 0;
        int diff = 0;
        diff = abs(a - b);
        time = diff * 4;
        time = time + 3;
        time = time + 5;
        time = time + 3;
        time = time + (a * 4);
        time = time + 3;
        time = time + 5;
        printf("Case %d: %d\n", i, time);
    }
    return 0;
}