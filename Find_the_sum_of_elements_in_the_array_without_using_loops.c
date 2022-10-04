#include<stdio.h>

int main(){
    
    int n,i;
    scanf("%d",&n);
    int arr[n],sum=0;
    if (n>=1 && n<=30){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        printf("%d",sum);
    }
    else{
        printf("Enter a Valid Number");
    }
    
    return 0;
}