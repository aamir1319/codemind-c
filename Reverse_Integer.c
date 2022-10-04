#include<stdio.h>

int main(){
    int x,reverse=0;
    
    scanf ("%d",&x);
    // revering the digits
    if (x>0){
        while (x>0){
            reverse = reverse*10 + x%10;
            x=x/10;
        }
        printf("%d",reverse);
    }
    else{
        while (x<0){
            reverse = reverse*10 + x%10;
            x=x/10;
        }
        printf("%d",reverse);
    }
    
}