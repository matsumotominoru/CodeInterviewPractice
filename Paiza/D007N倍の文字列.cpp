#include <stdio.h>
int main(void){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int num = atoi(str);
    
    for(int i=0;i<num;i++){
        printf("*");
    }
    return 0;
}