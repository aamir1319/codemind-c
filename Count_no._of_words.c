#include<stdio.h>
#include<string.h>

int main(){
    
    int count,i,l;
    char str[100];
    
    scanf("%[^
]%*c",str);
    count=1;
    l=strlen(str);
    for(i=0;i<l;i++){
        if (str[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}