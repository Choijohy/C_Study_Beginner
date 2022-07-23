#include <stdio.h>
#include <string.h>

int main() {

  char arr[1100];
  
  fgets(arr, 1100, stdin);
  
  int lenArr = strlen(arr);
  //Hello World!  \n
  //01234567891011 11
  for(int i=lenArr-1; i>=0; i--){
    printf("%c",arr[i]);
  }
 
  return 0;
}