#include<stdio.h>


int main(){

    int n,x = 0;
    char str[150];
    scanf("%d",&n);
    while(n--){
        scanf("%s",&str);
        if(str[1] == '+'){x++;}
        else {x--;}
    }
    printf("%d",x);
    return 0;
}