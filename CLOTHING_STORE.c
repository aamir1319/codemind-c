#include<stdio.h>

int count(int *arr,int n,int s){
    int i,c=0;
    for (i=0;i<n;i++)
    {
        if (s==arr[i]){
            c++;
        }
    }
    return c;
}

int not_in(int *temp,int n,int s)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (s==temp[i])
        {
            return 0;
        }
    }
    return 1;  
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=0;
    int temp[n],j=0;
    for (i=0;i<n;i++)
    {
        if (not_in(temp,j,arr[i])){
            temp[j] = arr[i];
            int c = count(arr,n,arr[i]);
            s = s+c/2;
            j++;
        }
    }
    printf("%d",s);
    
    return 0;
}