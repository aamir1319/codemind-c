#include<stdio.h>

int main()
{
    char str[10000];
    scanf("%s",str);
    int i,j;
    
    int flag=0;
    for (i=0;str[i]!=NULL;i++)
    {
        for (j=0;str[j]!=NULL;j++)
        {
            if (i==j){continue;}
            else if (str[i]==str[j])
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if (flag==1)
        {
            printf("%d",i);
            break;
        }
    }
    if (flag==0)
    {
        printf("-1");
    }
    return 0;
}