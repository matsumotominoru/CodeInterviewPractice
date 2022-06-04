#include <stdio.h>
int main(void){

    char str[100];
    char transStr[100];
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    for(i = 0;str[i]!='\0';i++){
        transStr[i] = str[i];
        if(str[i]=='A'){
            transStr[i] = '4';
        }
        else if(str[i]=='E'){
            transStr[i]='3';
        }
        else if(str[i]=='G'){
            transStr[i]='6';
        }
        else if(str[i]=='I'){
            transStr[i]='1';
        }
        else if(str[i]=='O'){
            transStr[i]='0';
        }
        else if (str[i]=='S'){
            transStr[i]='5';
        }
        else if (str[i]=='Z'){
            transStr[i]='2';
        }
    }
    transStr[i]='\0';
    
    printf("%s\n",transStr);
    return 0;
}