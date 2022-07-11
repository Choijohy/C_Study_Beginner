#include <stdio.h>

int main(void){
    int n,m,k,idx,add,add2,arr[110];
    m = 0; // arr에 담길 값
    idx = 0; // 데이터가 담길 arr index값(위치)
    add = 1; // 행 단위 증가(가로)
    add2 = 1; // 맨 처음 열 단위 증가(세로)
    scanf("%d",&n);
    // 맨 앞 줄(열) 증가 for문 
    for (k=0;n-k>0;k++){
        int temp,i;
        m += add2;//1,3,6...
        add2 +=1;//1,2,3...
        temp = m; // 아래 for문으로 m값이 변경되기 전의 m값 미리 temp에 저장
        
        // 행 단위(특정 행 안에서 증가) 증가 for문
        for (i=0; i<n-k; i++){
            arr[idx] = m;// n=5 m= 1, 2, 4, 7, 11 
            m+=add; // 1,2,4,7 ..
            add+=1; // 1,2,3 ...
            idx+=1; // 1,2,3 ...
            printf("%d ",arr[idx-1]);
        }
        printf("\n"); //줄바꿈 
        m = temp;
        add =(k+2);
    }
    
}