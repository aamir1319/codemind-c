#include<stdio.h>

int main()
{
    int i,c=0;
    char str[100000];
    scanf("%[^
]%*c",str);
    char ch;
    scanf("%c",&ch);
    for(i=0;str[i]!=0;i++)
    {
        if (str[i]==ch)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else{
        printf("-1");
    }
    return 0;
}