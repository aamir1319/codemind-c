#include<stdio.h>

int main(){
    
    int n,i,j,factor=0,flag,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (n%i==0){
            factor++;
        }
    }
    if (factor>2){
        printf("Not Mega Prime");
    }
    else{
        int check=0;
        temp = n;
        while (temp>0){
            check = temp%10;
            temp/=10;
            if (check==5){
                flag =1;
                continue;
            }
            else if(check==3){
                flag =1;
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if (flag==1){
            printf("Mega Prime");
        }
        else{
            printf("Not Mega Prime");
        }
    }
    return 0;
}