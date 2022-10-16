#include<stdio.h>
const int N=1e5+10;
int arr[N];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int narr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&narr[i]);
        arr[narr[i]]++;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[narr[i]]==1){
            flag=1;
            printf("%d ",narr[i]);
        }
    }
    if(flag==0)printf("-1");
}