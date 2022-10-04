#include<stdio.h>

main(){
    int x,sum=0,product=1;
    scanf("%d",&x);
    while (x>0){
        sum+=x%10;
        product*=x%10;
        x=x/10;
    }
    if (sum==product){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}