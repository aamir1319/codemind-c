/*A person has X coins worth 1 rupee each and Y coins worth 2 rupees each.
He wants to distribute all of these X+Y coins to his two sons so that the total value of coins received by each of them is the same.
Find out whether Chef will be able to do so.*/
#include<stdio.h>

int main(){
    
    int a,b;
    scanf("%d%d",&a,&b);
    
    if (a%2==0 && b%2==0){
        printf("YES");
    }
    else if (a == 0 && b % 2 != 0){
        printf("NO");
    }
    else if ((a+2*b)%2==0){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
    
    return 0;
}