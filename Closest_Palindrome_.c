#include<stdio.h>
int main()
{
    int n,after,before;
    scanf("%d",&n);
    after=n;
    before=n;
    while(after++)
    {
        int temp=after;
        int rev=0;
        while(temp>0)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==after)
        {
            break;
        }

    }
    while(before--)
    {
        int temp=before;
        int rev=0;
        while(temp>0)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==before)
        {
            break;
        }
    }
    int da=after-n,db=n-before;
    if(da==db)
    {
        printf("%d %d",before,after);
    }
    else if(da>db)
    {
        printf("%d",before);
    }
    else
    {
        printf("%d",after);
    }
    return 0;
}