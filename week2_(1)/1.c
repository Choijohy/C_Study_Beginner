#include <stdio.h>

int main() {

  char input[1100];
  int count = 0;
  
  fgets(input, 1100, stdin);
  while (input[count]){
    if(input[count] >= 65 && input[count] <=90){
      input[count] += 32;
    }
    else if(input[count] >= 97 && input[count] <=122){
      input[count] -= 32;
    }  
    count++;  
  }
  
  printf("%s", input);

  return 0;
}