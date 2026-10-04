#include<stdio.h>
int solveMeFirst(int a, int b);
int main(void)
{
    int num1;
    int num2;
    scanf("a = %d b = %d", &num1, &num2);
    int sum = solveMeFirst(num1, num2);
    printf("%d", sum);
    return 0;
}
int solveMeFirst(int a, int b)
{
    int total = a + b;
    return total;
}