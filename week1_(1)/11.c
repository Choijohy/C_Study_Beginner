#include <stdio.h>

int main(){
    int n,m,k,g;
    scanf("%d",&n); // n: 행(줄) 개수 
    k=1; // *개수 제어
    g=n; // 공백 개수 제어
    for (m=0;m<n;m++){ 

        //아래는 한     줄당 발생하는 이벤트
        int i,j;

        //공백 for문: i=n,n-1,...,3,2 (n-1번)
        for(i=g;i>1;i--){ printf(" ");}
        g-=1; // 공백 개수는 행이 내려갈수록 감소
        // * for문
        for(j=0;j<(2*k-1);j++){ // * 개수 : 1, 3, 5, 7, 9, 11 ...
            printf("*");
        }
        k+=1; // * 개수는 행이 내려갈수록 증가
        printf("\n");
    }
    
}