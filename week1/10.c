#include <stdio.h>

int main(){
    int n,i,k;
    scanf("%d",&n);
    for (i=0;i<n;i++){ // 행 수(줄 수)
        // 한 줄 당 *개수
        // i=0 k=0, i=1 k=0,1 , i=2 k=0,1,2
        for(k=0;k-i<1;k++){ 
            printf("*");
        }
        printf("\n");
    }
}