#include <stdio.h>

int main(void){
    int n,k,i,cnt;
    cnt = 0;
    // n의 k번째 약수
    scanf("%d %d",&n,&k);

    for (i=1;i<=n;i++){
        if(n%i == 0){
            cnt +=1; // 몇 번째 약수인지
            if(cnt == k){
                printf("%d",i);
                break;
            }
        }
    }
}