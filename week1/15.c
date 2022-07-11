#include <stdio.h>

int n, s;
int arr[110][300];

int main(){
  scanf("%d %d", &n, &s);
  
  for(int i=1; i<=n; i++){
    for(int j=1; j<=2*i-1; j++){
      arr[i][j]=s++;
      if(s>=10) s=1;
    }
  }
  
  for(int i=1; i<=n; i++){
    for(int j=0; j <n-i; j++) printf(" ");
    
    if(i%2==0){
      for(int j=1; j<=2*i-1; j++) printf("%d", arr[i][j]);
    }else{
      for(int j=2*i-1; j>=1; j--) printf("%d", arr[i][j]);
    }
    printf("\n");
  }
   
  return 0;
}