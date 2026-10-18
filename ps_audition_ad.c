#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int i;
    for(i = 0; i < t; i++)
    {
        char c;
        scanf(" %c", &c);
        if(c == 'b' || c == 'B')
        {
            printf("BattleShip\n");
        }
        else if(c == 'c' || c == 'C')
        {
            printf("Cruiser\n");
        }
        else if(c == 'd' || c == 'D')
        {
            printf("Destroyer\n");
        }
        else if(c == 'f' || c == 'F')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}