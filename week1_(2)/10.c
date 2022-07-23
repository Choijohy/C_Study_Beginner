#include <stdio.h>

int r, c;
int arr[50][50];
int main(){
  int ans; //최종 출력할 점수
  int idx; //최종 출력할 x위치 (열)
  int zero; //특정 열에 막대기를 놓는데, 막대기가 떨어지는 y축 값
  int score; //특정 열에 막대기를 놓고나서 계산해 본 점수
  int cnt; 
    
  scanf("%d%d", &c, &r);
  for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  ans = 0;
  idx = 0;
  
	// 0(1,1) 0(1,2) 0(1,3) 0(1,4) 0(1,5) 0(1,6)
	// 0(2,1) 0(2,2) 0(2,3) 0(2,4) 0(2,5) 0(2,6)
  // 1(3,1) 1(3,2) 1(3,3) 0(3,4) 0(3,5) 1(3,6)
  // 1(4,1) 1(4,2) 1(4,3) 0(4,4) 0(4,5) 1(4,6)
	// 1(5,1) 1(5,2) 1(5,3) 0(5,4) 1(5,5) 1(5,6)
	// 1(6,1) 1(6,2) 1(6,3) 0(6,4) 1(6,5) 1(6,6)
  // 1(7,1) 1(7,2) 1(7,3) 0(7,4) 1(7,5) 1(7,6)
  
  
  for(int j=1; j<=c; j++){
    zero=r; ////만약 어떤 열에 1이 하나도 없으면 y축의 r에 떨어질 것임.
    for(int i =1; i<=r; i++){
      if(arr[i][j] == 1){
        zero = i-1;//만약 1이라면 그 위에 떨어질 것이기 때문에 zero를 i-1이 되어야 함.
        break;
      }
    }
      
    // 세로로 4CM이니까 (1, y), (2, y), (3, y)는 틀에서 벗어나게 되니까 넘어가자~ 
    if(zero<4){
      continue;
    }
    // 그 열에 처음 떨어질 위치부터 쭉 4칸씩 1로 찍는다.
    for(int i=0; i<4; i++){
      arr[zero - i][j] = 1; //
    }
    
    score=0;
    for(int i=1; i<=r; i++){ //반복문 중괄호 범위 다시 확인
      cnt=0;
      for(int k=1; k<=c; k++){
        if(arr[i][k] == 1){
          cnt++;
        }
      }
			//한줄이 전부 1인지 아닌지 확인을 하고 있음.
      if(cnt == c){ // 포함 관계 다시 확인, 그리고 cnt == 6 이 아니겠지요.
        score++;
      }
    }
                                                                                                                                        
      if(ans < score){
        ans = score;
        idx = j; /////ans
      }
    
      for(int i=0; i<4; i++){
        arr[zero-i][j] = 0; //
      }
    
  }
    
  printf("%d %d", idx, ans);  
    
  return 0;  
  }