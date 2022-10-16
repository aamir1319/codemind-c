#include<stdio.h>

const int N=1e6+10;
int hsh[N];
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hsh[arr[i]]++;
    }
    int m=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if (hsh[arr[i]]==1 && arr[i]>m){
            m=arr[i];
            flag=1;
        }
    }
    if (flag==1)
    printf("%d",m);
    else
    printf("-1");
}