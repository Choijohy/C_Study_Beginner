#include <stdio.h>

int main(){
    int n,arr[10][10]={0,};
    scanf("%d", &n); // 뒤집을 횟수
    
    for(int k=0; k<n; k++){
        // 행 뒤집기
        for (int i=0; i<10; i++){
            if(arr[i][k]==0){
                arr[i][k] = 1;
            }else {
                arr[i][k] = 0;
            }
        }
        // 열 뒤집기
        for (int i=0; i<10; i++){
            if(k!=i){
                if(arr[k][i]==0){
                arr[k][i] =1 ;
                }else{
                arr[k][i] =0;
                }
            }
            
        }
    }
    
    for(int i=0;i<10;i++){
        for(int j=0; j<10; j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
}