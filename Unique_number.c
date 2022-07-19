#include<stdio.h>

int main()
{
    int n,i,j,flag=1,dcount=0;
    scanf("%d",&n);
    int temp=n;
    while (temp>0)
    {
        dcount++;
        temp/=10;
    }
    int arr[dcount];
    i=0;
    while (n>0)
    {
        arr[i]=n%10;
        i++;
        n/=10;
    }
    
    for(i=0;i<dcount;i++)
    {
        for(j=0;j<dcount;j++)
        {
            if (i==j)
            {
                continue;
            }
            else if(arr[i]==arr[j])
            {
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if (flag==0)
        {
            printf("Not Unique Number");
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Unique Number");
    }
    return 0;
}