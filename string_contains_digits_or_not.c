#include<stdio.h>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
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
        printf("No
");
    }
    else{
        printf("Yes
");
    }
    }
}