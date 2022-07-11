#include <stdio.h>

int main(void){
    int a,b,c,n,cnt;
    scanf("%d %d %d",&a,&b,&c);
    cnt =0;
    // a=3, b=6 
    // a=2, b=9
    if(a<=b){
        for (n=1;c*n<=b;n++){ // b보다 이하인 c의 배수 중에서
            if(c*n >= a){ // a보다 이상인 배수
                cnt+=1;
            }
        }
    }
    // a=6, b=3 
    // a=9, b=2
    else{
        for (n=1;c*n<=a;n++){ // a보다 이하인 배수 중에서
            if(c*n >= b){ // b보다 이하인 배수
                cnt+=1;
            }
        }
    }
    printf("%d",cnt);
}
