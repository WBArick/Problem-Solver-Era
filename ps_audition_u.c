#include<stdio.h>
char str[100];
int main(void)
{
    scanf("%s", str);
    int i;
    int count = 1;
    int final_count = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
        else
        {
         if(final_count < count)
         {
           final_count = count;
         }
         count = 1;
        } 
    }
    printf("%d\n", final_count);
    return 0;
}