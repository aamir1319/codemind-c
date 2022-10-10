#include<stdio.h>
#include<string.h>

int main(){
    
    int vcount,ccount,dcount,wcount,i,l;
    char str[100];
    
    scanf("%[^
]%*c",str);
    
    l = strlen(str);
    vcount=0;
    ccount=0;
    dcount=0;
    wcount=0;
    
    for (i=0;i<l;i++){
        if (str[i]== 'a' ||  str[i]== 'A' ||
            str[i]== 'e' ||  str[i]== 'E' ||
            str[i]== 'i' ||  str[i]== 'I' ||
            str[i]== 'o' ||  str[i]== 'O' ||
            str[i]== 'u' ||  str[i]== 'U'){
                
                vcount++;
        }
        else if (   str[i]== 'b' ||  str[i]== 'B' ||
                    str[i]== 'c' ||  str[i]== 'C' ||
                    str[i]== 'd' ||  str[i]== 'D' ||
                    str[i]== 'f' ||  str[i]== 'F' ||
                    str[i]== 'g' ||  str[i]== 'G' ||
                    str[i]== 'h' ||  str[i]== 'H' ||
                    str[i]== 'j' ||  str[i]== 'J' ||
                    str[i]== 'k' ||  str[i]== 'K' ||
                    str[i]== 'l' ||  str[i]== 'L' ||
                    str[i]== 'm' ||  str[i]== 'M' ||
                    str[i]== 'n' ||  str[i]== 'N' ||
                    str[i]== 'p' ||  str[i]== 'P' ||
                    str[i]== 'q' ||  str[i]== 'Q' ||
                    str[i]== 'r' ||  str[i]== 'R' ||
                    str[i]== 's' ||  str[i]== 'S' ||
                    str[i]== 't' ||  str[i]== 'T' ||
                    str[i]== 'v' ||  str[i]== 'V' ||
                    str[i]== 'w' ||  str[i]== 'W' ||
                    str[i]== 'x' ||  str[i]== 'X' ||
                    str[i]== 'y' ||  str[i]== 'Y' ||
                    str[i]== 'z' ||  str[i]== 'Z'){
                ccount++;
        }
        else if(str[i]== '0' ||
                str[i]== '1' ||
                str[i]== '2' ||
                str[i]== '3' ||
                str[i]== '4' ||
                str[i]== '5' ||
                str[i]== '6' ||
                str[i]== '7' ||
                str[i]== '8' ||
                str[i]== '9'){
            dcount++;
        }
        else if(str[i]==' '){
            wcount++;
        }
        
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",vcount,ccount,dcount,wcount);
    return 0;
}