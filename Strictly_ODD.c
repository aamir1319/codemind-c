#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for (i=0;i<n;i++){
        if((i==0)&&(arr[i]%2==1)){
            flag=0;
            break;
        }
        else if ((i%2==1)&& arr[i]%2==1){
            flag=1;
        }
        else if (i%2==0 && arr[i]%2!=0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}