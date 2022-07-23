#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char arr[1005];
char arr2[1005];
int arrLen;
int arr2Len;

bool check(int idx){
  int i;
  
  for(i=0; i< arr2Len; i++){
    if(arr[idx+i] != arr2[i]){
      return false;
    }
  }
  return true;
}


int main() {
  scanf("%s", arr);
  scanf("%s", arr2);
  
  arrLen = strlen(arr);
  arr2Len = strlen(arr2);
  
  for(int i=0; i<arrLen; i++){
    if(check(i)){
      printf("YES");
      return 0;
    }
  }
  
  printf("NO");
  return 0;
}