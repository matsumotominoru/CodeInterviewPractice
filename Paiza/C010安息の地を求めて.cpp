#include <stdio.h>
int main(void){
    int a;
    int b;
    int R;
    int N;
    int x;
    int y;
    
    scanf_s("%d%d%d",&a,&b,&R);
    scanf_s("%d",&N);
    
    for(int i =0;i<N;i++){
        scanf_s("%d%d",&x,&y);
        if((x-a)*(x-a)+(y-b)*(y-b) < R*R){
            printf("noisy\n");
        }
        else {
            printf("silent\n");
        }
    }
    
    return 0;
}