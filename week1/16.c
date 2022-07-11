#include <stdio.h>

int main(void){
    int ans, temp, score, i,num,front;
    scanf("%d",&num); //문제 개수
    temp = 0; //현재 문제 실제 반영 점수
    score = 0; // 총점
    front = 0; // 앞에 문제 틀렸는지(0) 맞았는지(1)
    for (i=0; i<num; i++){
        scanf("%d", &ans);
        // 입력값 잘 받았는지 판별: printf("%d\n",ans);
        // 앞 문제 맞았는지 판별: printf("%d",front); 
        if(ans == 1){
            // 연속으로 맞았을 경우 
            if (front == 1){
                temp +=1;
                front = 1;
            }else{ 
                temp = 1;
                front = 1;
            }
        }else{
            temp=0;
            front = 0;
        }
        // printf("%d\n",temp);
        score += temp;
    }
    printf("%d",score);

}