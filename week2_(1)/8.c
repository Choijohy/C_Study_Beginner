/*
1) 빙고판 완성
2) 사회자 정답 빙고판 원소 한개씩 한개씩 탐색
    1. 정답 불린 수는 빙고판에서 0으로 변경 
    2. 가로/세로/대각선 빙고 비교 
        - 빙고인 경우 bingo++
        - bingo == 3인 경우, 반복문 탈출 및 사회자의 몇번째 정답인지 저장
4) 사회자가 몇번째 불렀을 때인지 저장한 수 출력
*/


#include <stdio.h>

int main(){
    int a;
    int bingo = 0;
    //1) 빙고판 만들기
    int bingoBoard[5][5];
    for (int i = 0; i <5; i++){
        for(int j=0; j <5; j++){
            scanf("%d",&bingoBoard[i][j]);
        }
    }

    int order = 0;
    for(int x=0; x<5; x++){
        for(int y=0; y<5;y++){
        order ++;
        printf("%d",bingo);
        scanf("%d",&a);
        
            // 2)-1 정답 불린 수는 빙고판에서 0으로 변경
            for (int i=0; i<5; i++){
                for (int j=0; j<5; j++){
                    if(bingoBoard[i][j] == a){
                        bingoBoard[i][j] = 0;
                    }
                }
            }

            // 2) -1 가로 빙고  : 행 고정,  열 바뀜 
            for (int i=0; i<5; i++){
                int cnt = 0; // 줄 마다 0개수 세야하므로 cnt초기화 
                for(int j =0; j<5; j++){
                    if (bingoBoard[i][j] = 0){
                        cnt++;
                    }
                }
                if(cnt == 5){
                    bingo ++;
                }
            }

            // 2) -2 세로 빙고 - 열 고정, 행 바뀜
            for (int i=0; i<5; i++){
                int cnt = 0;
                for(int j=0; j<5; j++){
                    if(bingoBoard[j][i] = 0){
                        cnt++;
                    }
                }
                if (cnt == 5){
                    bingo ++;
                }
            }

            // 2) -3 대각선 빙고 

            if(bingoBoard[0][0] == 0 && bingoBoard[1][1] == 0 && 
            bingoBoard[2][2] == 0 && bingoBoard[3][3] == 0 && bingoBoard[4][4] == 0){
                bingo ++;
            }

            if(bingoBoard[0][4] == 0 && bingoBoard[1][3] == 0 && 
            bingoBoard[2][2] == 0 && bingoBoard[3][1] == 0 && bingoBoard[4][0] == 0){
                bingo++;
            } 
            printf("%d",bingo);
            if(bingo>=3){
                printf("%d", order);
                return 0;
            }
    }
    }
    return 0;
}