#include<stdio.h>
#include<math.h>

int main(){
    
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    if (x>=1 && x<=20 && y>=1 && y<=100 && m>=2 && m<=100){
        int power = pow(x,y);
        int result = power%m;
        printf("%d",result);
    }
    
    return 0;
}