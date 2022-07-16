#include <stdio.h>
#include <stdlib.h> //abs


int main(){
  
  //n : 맵 크기 , x :유닛 위치 행, y:유닛 위치 열, r:사거리
  int n,x,y,r;
  int arr[110][110]; // 배열은 여유 있게 생성 - 출력만 지정범위 출력
  
  scanf("%d %d %d %d", &n,&x,&y,&r);
 
  // 조건1 : 6 <=N <= 100 
  if(n<6 || n>100 || n%2!=0){
    return 0;
  }
  
  // 조건2
  if(x<1 || y<1 || x>n || y>n || r>(n/2)){
    return 0;
  }
  
  int dis;
  
  // i - 행 , j - 열 
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==x && j==y){ // 유닛 위치
        printf("x ");
      }
      else if(abs(x-i)+abs(y-j)<=r){ // 유닛과의 거리가 사거리 보다 이하 
        printf("%d ",(abs(x-i)+abs(y-j))); // 행,열 별로 떨어진 칸 수만큼이 거리
      } 
      else{
        printf("0 ");
      }
    }
    printf("\n");
  }
}
