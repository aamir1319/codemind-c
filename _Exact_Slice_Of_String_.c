#include<stdio.h>

int main()
{
    char str[10000];
    int l,r,i;
    scanf("%[^
]%*c",str);
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}