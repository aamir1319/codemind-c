#include<stdio.h>
#include<string.h>

int main(){
    
    char str[1000];
    scanf("%[^
]%*c",str);
    
    int count,l=strlen(str);
    
    for(count=0;str[count]!= NULL;count++){
        if (str[count]=='.'){
            printf("[.]");
        }
        else{
            printf("%c",str[count]);
        }
    }
    
    return 0;
}