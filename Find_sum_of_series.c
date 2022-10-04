#include<stdio.h>

int main(){
    
    float n,result;
    int i,temp;
    scanf("%f",&n);
    result = 0;
    for(i=1;i<=n;i++){
        result += 1/(i*1.0);
    }
    printf("%.2f",result);
    
    return 0;
}