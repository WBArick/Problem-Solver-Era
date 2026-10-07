#include<stdio.h>
int main(void)
{
    int sum;
    int num1;
    int num2;
    int num3;
    scanf("%d", &sum);
    scanf("%d %d %d", &num1, &num2, &num3);
    int total = num1 + num2 + num3;
    int lastNum = sum - total;
    printf("%d\n", lastNum);
    return 0;
}