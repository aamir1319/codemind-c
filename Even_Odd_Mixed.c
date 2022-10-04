#include<stdio.h>

int main(){
    
    int n,temp,ecount=0,ocount=0,dcount=0;
    scanf("%d",&n);
    temp = n;
    while (temp>0){
        int check = temp%10;
        if (check%2==0){
            ecount++;
        }
        else{
            ocount++;
        }
        dcount++;
        temp/=10;
    }
    if (ecount==dcount){
        printf("Even");
    }
    else if(ocount==dcount){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
    
    return 0;
}