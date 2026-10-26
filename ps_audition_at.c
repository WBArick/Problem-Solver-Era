#include<stdio.h>
#include<math.h>
int main(void)
{
    double pi = 2 * acos(0.0);
    int t;
    scanf("%d", &t);
    int i;
    for(i = 1; i <= t; i++)
    {
        double r;
        scanf("%lf", &r);
        double d = 2 * r;
        double c_area = pi * r * r;
        double s_area = d * d;
        double blue_area = (s_area - c_area) + 1e-9;
        printf("Case %d: %.2f\n", i, blue_area);
    }
    return 0;
}