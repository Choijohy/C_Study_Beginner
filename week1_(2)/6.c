#include <stdio.h>
#include <stdbool.h> //bool

int main(){
    int arr[20][20]={0,};
    int KingC, KingR;
    int rookC[8], rookR[8], rookCnt = 0;

    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1){
                KingR = i; //Row
                KingC = j; //Column
            }else if(arr[i][j] == 2){
                rookR[rookCnt] = i; //Row
                rookC[rookCnt] = j; //Column
                rookCnt ++;
            }
        }
    }
    
    bool flag = false;

    for (int k=0; k<rookCnt; k++){
        int rC = rookC[k], rR = rookR[k];
        //오른쪽 탐색
        for (int i=rC+1; i<8; i++){
            if (arr[rR][i]==1) {flag = true;}
            else if(arr[rR][i] == 3) {break;}
        }
        // printf("%s\n", flag ? "true":"false");
       
        
        //왼쪽 탐색
        for (int i=rC-1; i>=0; i--){
            if (arr[rR][i]==1) {flag = true;}
            else if(arr[rR][i]==3){break;}
        }
        // printf("%s\n", flag ? "true":"false");

        // 위쪽 탐색
        for(int i=rR+1; i<8; i++) {
            if(arr[i][rC]==1) {flag = true;}
            else if(arr[i][rC] == 3) {break;}
        }
        // printf("%s\n", flag ? "true":"false");

        // 아래쪽 탐색
        for(int i=rR-1; i>=0; i--) {
            if(arr[i][rC]==1) {flag = true;}
            else if(arr[i][rC] == 3) {break;}
        }
        //printf("%s\n", flag ? "true":"false");
    }
    
    // printf("%s\n", flag ? "true":"false");
    if(flag){printf("1\n");}
    else {printf("0\n");}
    return 0;
}