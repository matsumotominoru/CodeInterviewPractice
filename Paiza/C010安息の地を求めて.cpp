#include <stdio.h>
int main(void){
    int a, b, R;//工事現場のx座標,工事現場のy座標,工事現場の騒音の大きさ
    int N;//木陰の数
    int x, y;//木陰のx座標,木陰のy座標
    char buf[1000];

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d %d\n", &a, &b, &R);

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d\n", &N);
    
    for(int i =0;i<N;i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d %d\n", &x, &y);
        
        if((x-a)*(x-a)+(y-b)*(y-b) < R*R){
            printf("noisy\n");
        }
        else {
            printf("silent\n");
        }
    }
    
    return 0;
}