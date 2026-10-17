#include<stdio.h>
int main(void)
{
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);
    if(n != 1)
    {
     do
     {
      if(n % 2 == 0)
      {
        n = n / 2;
    
      }
      else if(n % 2 != 0)
      {
        n = (n * 3) + 1;
     
      }
      printf("%lld ", n);
     } while(n != 1); 
     
    } 
    
    return 0;
}