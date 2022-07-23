#include <stdio.h>

int main() {

  int dx[4] = {0, 1 , 0, -1};
  int dy[4] = {1, 0 , -1, 0};
  int arr[1010][1010] = {0, };
  
  int x=1;
  int y=1;
  int dir=0;
  int r, c, k;
  
  scanf("%d %d", &r, &c);
  scanf("%d", &k);
  //1부터 42까지 돌리겠다.
  for(int i=1; i<=r*c; i++){
    //첫번째 칸 (1,1) = 1
		arr[x][y] = i;
    //dir 0 일 경우, 
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    
    if(nx < 1 || nx > r || ny < 1 || ny > c || arr[nx][ny] != 0){
      dir = (dir + 1) % 4;
    }
    
    x += dx[dir];
    y += dy[dir];
  }
  
  for(int i=1; i <= r; i++){
    for(int j=1; j<=c; j++){
      if(arr[i][j] == k){
        printf("%d %d", i, j);
        return 0;
      }
    }
  }
  printf("0");

  return 0;
}