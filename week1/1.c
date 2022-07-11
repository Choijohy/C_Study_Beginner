// #: 전처리기 
// stdio.h: 표준입출력 함수 헤더파일
#include <stdio.h>

/*
    return type: int
    function name: main (main이 아닌 경우 dev c+에서오류-> error: ld returned 1 exit status)
*/

int main(){
    int num; // local variables 

    printf("Write a number");

    // &(주소 연산자) : 입력받은 데이터를 뒤에 나온 변수에 저장
    // %d : int타입 정수형
    scanf("%d",&num);

    // % : 나머지 
    if(num%2 == 1){
        printf("not even");
    }
    else{
        printf("even");
    }
    return 0;
}

