#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    int length;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &length);
        
        double w = length * 6.0/10.0;
        double r = length / 5.0;
        double area = length * w;
        double red = acos(-1) * r * r;
        double green = area - red;
        printf("%.2lf %.2lf\n", red, green);
    }

    return 0;
}