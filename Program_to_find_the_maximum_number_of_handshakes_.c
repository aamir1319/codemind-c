#include<stdio.h>

int main(){
    int x,handshake;
    scanf("%d",&x);
    handshake = x*(x-1)/2;
    printf("%d",handshake);
    return 0;
}