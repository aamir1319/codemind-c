#include<stdio.h>

int main(){
    
    int l,b,d,c,nl,nb,area;
    
    scanf("%d%d%d%d",&l,&b,&d,&c);
    
    nl = l+d+d;
    nb = b+d+d;
    area = nl*nb - l*b;
    printf("%d",area*c);
    
    return 0;
}