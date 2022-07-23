#include <stdio.h>
#include <string.h>

int main() {

  char arr[1100];
  int aLen = 0;
  int cnt =0;
	//abcba
  scanf("%s", arr);
  //5개
  aLen = strlen(arr);
  
  for(int i=0; i<aLen; i++){
    if(arr[i] != arr[aLen -i -1]){
      break;
    }
    else{
      cnt++;
    }
  }

  if(cnt == aLen){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
}