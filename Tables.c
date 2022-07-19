#include<stdio.h>

main(){
    int n,r,i;
    scanf("%d%d",&n,&r);
    for (i=1;i<=r;i++){
        if (i%2==0){
            printf("
");
        }
        else{
            printf("%d x %d = %d",n,i,n*i);
        }
    }
}