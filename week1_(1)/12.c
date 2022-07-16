#include <stdio.h>

int main(){
    int n,m,i;
    scanf("%d %d",&n,&m);
    for (i=n;i<=m;i++){
        int j,cnt;
        cnt = 0;
        for (j=1;j<=i;j++){
            if(i%j==0){
                cnt++; //약수 개수
            }
        }
        if(cnt == 2){
            printf("%d ",i);
        }
    }
}