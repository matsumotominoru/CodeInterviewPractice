#include <stdio.h>
int main(void){
    char area[1000];
    char num[1000];
    
    fgets(area, sizeof(area), stdin);
    fgets(num, sizeof(num), stdin);
    
    int nArea = atoi(area);
    int nNum = atoi(num);
    
    printf("%d\n", nArea*nNum);
    return 0;
}