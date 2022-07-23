#include <stdio.h>
#include <string.h>

int main() {
  char arr[1010];
  int len;
  int cnt;
  
  fgets(arr, 1010, stdin);
  
  len = strlen(arr);
  arr[len]='#';
  
  cnt = 1;
  for(int i=1; i<=len; i++){
    if(arr[i] != arr[i-1]){
      if(cnt >=2){
        printf("%d", cnt);
      }
      printf("%c", arr[i-1]);
      cnt = 1;
    }
    else{
      cnt++;
    }
  }

  return 0;
}