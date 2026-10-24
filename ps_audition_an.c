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
        int count = 0;
        scanf("%d %d", &a, &b);
        int j;
        for(j = a; j <= b; j++)
        {
           int x = j;
           int found = 0;
           if(x == 0)
           {
            found = 1;
           }
           while(x > 0 && found == 0)
           {
            if(x % 10 == 0)
            {
                found = 1;
            }
            x = x / 10;
           }
           if(found == 1)
           {
            count++;
           }
        }
        printf("%d/%d\n", count, b - a + 1);
    }
    return 0;
}    