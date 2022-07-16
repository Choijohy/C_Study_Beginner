#include <stdio.h>

int n, s;
int arr[110][300];

int main(){
  scanf("%d %d", &n, &s);
  
  //배열에 담기 arr=[1,2,3,4,5,6,7,8,9,1,2,3,4,5...]
  for(int i=1; i<=n; i++){
    for(int j=1; j<=2*i-1; j++){//첫 줄에 1개, 두번째 줄에 3개, 셋째줄에 5개 ..
      arr[i][j]=s;
      s++;
      if(s>=10) s=1;
    }
  }
  
  //배열 출력하기
  for(int i=1; i<=n; i++){
    for(int j=0; j <n-i; j++) {printf(" ");} // 앞 공백수 - 4, 3, 2 ..
    
    if(i%2==0){
      for(int j=1; j<=2*i-1; j++) printf("%d", arr[i][j]);
    }else{
      for(int j=2*i-1; j>=1; j--) printf("%d", arr[i][j]);
    }
    
    printf("\n");
  }
   
  return 0;
}