#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    int i,j,l;
    
    scanf("%[^
]%*c", str);
    
    int sum=0,count;
    
    for(count=0;str[count] != NULL;count++){
        if((str[count] >= '0' && str[count]<='9')){
            sum += (str[count] - '0');
        }
    }
    
    printf("%d",sum);
    
    return 0;
}