#include<stdio.h>
#include<math.h>
int main(){
    
    // variables
    int num,temp,digit,dnum,numd,i;
    // dnum -- will store the digits of number from front
    // numd -- will store the digits of number from last
    scanf("%d %d",&num,&digit);
    // variable declaration
    dnum = 0;
    numd = 0;
    temp = num;
    
    // value of numd
    for (i=0;i<digit;i++){
    	if (i==0){
    		numd = numd*10 + temp%10;
		}
		else{
			numd = numd + (temp%10)*(pow(10,i));
		}
        temp/=10;
    }
    
    // value of dnum
    i = pow(10,digit);
    while (num>i){
    	dnum = num/10;
    	num/=10;
	}
	// finding the absolute difference between numd and dnum
    if (numd>dnum){
        printf("%d",numd-dnum);
    }
    else{
        printf("%d",dnum-numd);
    }
    
    return 0;
}