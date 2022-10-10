#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
char str[10000]; 
scanf("%[^
]%*c",str);
int i,len=strlen(str); char lower [len]; 
for(i=0;i<len;i++){

lower[i]=tolower((unsigned char) (str[i]));
}
printf("%s",lower);


return 0;}