#include<stdio.h>

int main()
{
    char str[1000000];
    scanf("%s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c++;
        }
    }
    if(!c)
    {
        printf("Doesn't contain digit");
    }
    else{
        printf("Contains %d digit",c);
    }
}