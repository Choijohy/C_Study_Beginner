#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,result;
    result = 1;
    scanf("%d",&n);

    //&&: and연산자
    // if (2<= n <= 20000) - 조건 인식 x
    if ((2 <= n) && (n<= 20000)){
        for (i=2; i<n; i++ ){
            if(n%i == 0){
                result = 0;//소수인지 아닌지 판별
                break;
            } 
        }
        if (result){printf("YES");}
        else{printf("NO");}
    } else{
        printf("You can enter 2<=n<=20000");
    }
}