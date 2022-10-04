#include<stdio.h>
int main(){
    int a,b,i,flag=0,check;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++){
        int temp=i;
        while(temp>0){
            check=temp%10;
            if(check!=0){
                if(i%check==0){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
            temp/=10;
        }
        if(flag!=0){
            printf("%d ",i);
        }
    }
}