#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if((a>=b)&&(a>=c)){ //a가 제일 큰 경우
        printf("%d",a);
    }else if(b>=c){ //b가 제일 큰 경우
        printf("%d",b);
    }else{
        printf("%d",c);
    }
}