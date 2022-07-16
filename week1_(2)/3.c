/*
    (1) 변수 및 학생들의 이전 반 정보를 담은 배열/같은 반 수 총합 정보를 담은 배열 생성
    (2) 첫번째 학생 1학년때 반부터 탐색 시작 - 0행 1열 
        - 다음줄 학생의 1~5학년 반 중에 겹치는게 있는지 확인
        - 겹치는 숫자가 있으면 cnt ++ 
        - cnt값 배열에 저장 
        - 위의 2가지를 나머지 모든 학생에 대해 반복
    (3) 같은 반 수 총합 정보를 담은 배열 중에서 가장 큰 원소가 있는 인덱스+1 출력
        (동일한 원소가 있을 경우, 앞의 인덱스+1 출력)
*/


#include <stdio.h>

int main(){
    int n,max,maxIdx;
    int cnt=0;
    int class[1005][6]={0,};
    int result[1005]={0,};
    max = -1;
    maxIdx = 0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&class[i][j]);
        }
    }

    for (int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            for(int k=0; k<5; k++){
                if(class[i][k]==class[j][k]){
                    cnt ++;
                    break;
                }
            }  
        } 
        result[i]=cnt;
        // printf("%d\n",cnt);
        cnt =0;
    }

    for(int i=0; i<1005;i++){
        if(max < result[i]){
            max = result[i];
            maxIdx = i;
        }
    }
    printf("%d",maxIdx+1);

}