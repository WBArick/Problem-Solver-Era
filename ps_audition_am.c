#include<stdio.h>
int main(void)
{
    long long a;
    long long b;
    long long c;
    do
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a != 0 && b != 0 && c != 0)
        {
          if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
          {
            printf("right\n");
          }
          else
          {
            printf("wrong\n");
          }
        }  
    }while(a != 0 && b != 0 && c != 0);
    return 0;
}