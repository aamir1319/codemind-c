#include<stdio.h>

int main()
{
    
    char num[500];
    scanf("%s",num);
    int i;
    for(i=0;num[i]!=NULL;i++)
    {
        if (num[i]=='6')
        {
            num[i] = '9';
            break;
        }
    }
    printf("%s",num);
    return 0;
}