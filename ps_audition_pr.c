#include<stdio.h>
int main(void)
{
    char w1[100];
    char w2[100];
    scanf("%s %s", &w1, &w2);
    int i;
    int j;
    int found;
    int anargram = 1;
    for(i = 0; w1[i] != '\0'; i++)
    {
        found = 0;
        for(j = 0; w2[j] != '\0'; j++)
        {
            if(w1[i] == w2[j])
            {
                found = 1;
                w2[j] = '*';
                break;
            }
        }
        if(found == 0)
        {
            anargram = 0;
            break;
        }
    }
    for(j = 0; w2[j] != '\0'; j++)
    {
        if(w2[j] != '*')
        {
            anargram = 0;
            break;
        }
    }
    
    if(anargram == 1)
    {
        printf("Yes\n");
    }
    else if(anargram == 0)
    {
        printf("No\n");
    }
    return 0;
}