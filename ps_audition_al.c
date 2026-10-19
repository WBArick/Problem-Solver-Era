#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int quantity = 0;
    int price = 0;
    int i;
    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &quantity, &price);
        double total = 0;
        total = (double)quantity * price;
        if(quantity > 1000)
       {
           total = total - (total * 0.1);
       }
       printf("%lf\n", total);
    }
    return 0;
}