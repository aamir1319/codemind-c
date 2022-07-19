#include<stdio.h>

int main(){
    
    int n,i,factors;
    scanf("%d",&n);

    // check whether the given number is prime or not 
    factors = 0;
    for(i=1;i<=n;i++){
        if (n%i==0){
            factors++;
        }
    }
    
    if (factors==2){
        printf("0");
    }
    else{
        int aprime,bprime,dafter,dbefore,after,before;
        after =n;
        before=n;
        while(after++){
            factors=0;
            for(i=1;i<=after;i++){
                if(after%i==0){
                    factors++;
                }
            }
            if (factors==2){
                aprime=after;
                break;
            }
        }
        
        while(--before){
            factors=0;
            for(i=1;i<=before;i++){
                if(before%i==0){
                    factors++;
                }
            }
            if (factors==2){
                bprime=before;
                break;
            }
        }
        dafter = aprime-n;
        dbefore = n-bprime;
        
        if (dafter<dbefore){
            printf("%d",dafter);
        }
        else{
            printf("%d",dbefore);
        }
    }
    
    
    
    return 0;
}