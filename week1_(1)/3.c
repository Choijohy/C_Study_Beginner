#include <stdio.h>

int main(){
    int n,i,cnt;
    scanf("%d",&n);
    cnt = 0;
    if (1 <= n <= 2000){
        for (i=1; i <=n ; i++ ){
            if (i%2==0){
                cnt += i;
            }
        }
    }
    printf("%d",cnt);
}