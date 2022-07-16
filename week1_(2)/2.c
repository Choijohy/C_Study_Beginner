/*
    (1) 2차원 배열 및 변수 선언
        - 이때, 2차원 배열은 5*5보다 크게 -> 없는 값이 되버리면, 이후 조건문을 작성할때
        테두리에 있는 원소들은 '상하좌우보다 해당 원소값이 작다'라는 조건 판별이 어려워짐.
        (비교할 값이 존재하지 않기 때문)
        - arr= {
            (0,0,0,0,0,0,0)
            (0,1,1,1,1,1,0)
            (0,1,0,0,0,1,0)
            (0,1,0,0,0,1,0)
            (0,1,0,0,0,1,0)
            (0,1,1,1,1,1,0)
            (0,0,0,0,0,0,0)
        }
    (2) 배열에 실제 데이터가 존재하는 부분 저장 
    
    (3) 완전 탐색
        - 상 / 하 / 좌 / 우 비교
        - 모두 작으면 "*"출력 아니면 배열 원소 출력  
*/

#include <stdio.h>

int main(){
    //(1)
    // !!!!! 처음에 계속 틀렸던 이유 - 5*5 배열 만들고 있었음..;;
    // 참고로 배열 초기화는 0밖에 안됨.
    // int arr[7][7] = {10, }하면 첫 원소값만 10이 됨 
    int arr[7][7] = { 0, }; 
    
    for (int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            arr[i][j]=10;
        }
    }
    //(2)
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            scanf("%d",&arr[i][j]); 
        }
    }
  
    //(3)
    for(int i=1; i<6; i++){
        for (int j=1; j<6; j++){
            if (arr[i-1][j] > arr[i][j] && arr[i+1][j] > arr[i][j] && 
                arr[i][j+1] > arr[i][j] && arr[i][j-1] > arr[i][j] ){
                    printf("* ");
            }else{
                printf("%d ",arr[i][j]);
            }
    
        }printf("\n");
    }
            
}