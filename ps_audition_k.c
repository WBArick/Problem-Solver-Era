#include<stdio.h>
int main(void)
{
    int h, m, s;
    char time[3];
    scanf("%d:%d:%d%s", &h, &m, &s, time);
    if(time[0]== 'P' && h != 12)
    {
        h = h + 12;
    }
    else if(time[0]== 'A' && h == 12)
    {
        h = 0;
    }
    printf("%02d:%02d:%02d\n", h, m , s);
    return 0;
}