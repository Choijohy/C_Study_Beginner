#include <stdio.h>
#include <string.h>

int main() {

  char arr[100010];
  
	//문자열 입력
  fgets(arr, 100010, stdin);
  
	//문자열 길이만큼 반복문을 돌려서,
  for(int i=0 ; i<strlen(arr) ; i++){
    //' '가 아니라면,
		if(arr[i] != ' '){
      //문자를 출력해라.
			printf("%c", arr[i]);
    }
  }
  
  return 0;
}