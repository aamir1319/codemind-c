#include<stdio.h>

main(){
    int x,sq,sum=0;
    scanf("%d",&x);
    sq=x*x;
    while (sq>0){
        sum+=sq%10;
        sq=sq/10;
    }
    
    if (sum==x){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}