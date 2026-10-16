#include<stdio.h>
#include<math.h>
int main(void)
{
    int cases;
    scanf("%d", &cases);
    int i;
    for(i = 0; i < cases; i++)
    {
        int n;
        int k;
        scanf("%d %d", &n, &k);
        double pay;
        pay = (double)n / (double)(k+1);
        int net = n - k * floor(pay);
        printf("%d\n", net);
    }
    return 0;
}