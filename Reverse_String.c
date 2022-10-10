#include<stdio.h>
#include<string.h>

int main(){
    
    char str[1000];
    scanf("%[^
]%*c",str);
    int count,l=strlen(str);
    for(count=l-1;str[count]!= NULL;count--){
        printf("%c",str[count]);
    }
    
    return 0;
}