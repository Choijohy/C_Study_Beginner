/*
    도(A) : 0111
    개(B) : 0011
    걸(C) : 0001
    윷(D) : 0000
    모(E) : 1111
*/

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, sum;
    char resultArr[3];
    for (int i = 0; i < 3; i++){
        sum = 0;
        scanf("%d %d %d %d",&n1,&n2,&n3,&n4); // 1010(1개) vs 1 0 1 0(4개)
        sum = n1 + n2 + n3 + n4;

        // 결과 배열에 담기
        if (sum == 0){ resultArr[i]='D';} // error: resultArr[i]="D" 
        else if (sum == 1){ resultArr[i]='C';}
        else if (sum == 2){ resultArr[i]='B';}
        else if (sum == 3){ resultArr[i]='A';}
        else { resultArr[i]='E';}
    } 
    // 결과값 출력
    for (int i=0; i<3 ; i++){
        printf("%c\n",resultArr[i]);
    }  
    return 0;
}