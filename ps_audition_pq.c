#include<stdio.h>
#include<math.h>
int main(void)
{
    int a;
    int b;
    int c;
    double PI = acos(-1.0);
    while(scanf("%d %d %d", &a, &b, &c) == 3)
    {
      double s = 0;
      s = (double)(a + b + c) / (double)2;
      double t_area = 0;
      t_area = sqrt(s*(s - a) *(s - b)* (s - c));
      double r = 0;
      r = (double) (a * b *c) / (double) (4 * t_area);
      double c_area = PI * r * r;
      double sunflowers = c_area - t_area;
      double small_c = t_area / s;
      double roses = PI * small_c * small_c;
      double violets = t_area - roses;
      printf("%.4f %.4f %.4f\n", sunflowers, violets, roses);
    } 
    return 0;
}