#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    //printf("%d,%d,%d,%d",a,b,c,d);

    int valid = 1;
    int x = 0;//鶴の数
    int y = 0;//亀の数
    
    if(valid){
        if(c == d){
            valid = 0;
        }
    }
    
    if(valid){
        if((a-b*d)%(c-d) != 0){
            valid = 0;
        }
    }
    
    if(valid){
        if((-a+b*c)%(c-d) != 0){
            valid = 0;
        }
    }
    
    if(valid){
        x = (a-b*d)/(c-d);
        y = (-a+b*c)/(c-d);
        
        
        if(x > 0 && y > 0){
        printf("%d %d",x,y);
        }
        else{
            printf("miss");
        }
    }
    else{
        printf("miss");
    }
    
    
    return 0;
}