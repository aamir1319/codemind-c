#include<stdio.h>

int main(){
    
    int n,i;
    scanf("%d",&n);
    if (n>=1 && n<=10000 && n>0){
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
    }
    else{
        printf("The Number Series is Not Possible Print");
    }
    
    return 0;
}