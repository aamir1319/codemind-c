#include<stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-2;j>=i;j--){
                printf(" ");
            }    
            for(k=i;k>=1;k--){
                printf("%d",k);
            }
            for(l=0;l<=i;l++){
                printf("%d",l);
            }
            printf("
");
            
        }
        return 0;
}