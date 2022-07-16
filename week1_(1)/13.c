#include <stdio.h>

int main(void){
    int n1,n2,n3,num,total,temp,i;
    total = 0;
    scanf("%d",&num);
    for (i=0; i < num; i++){ //한 줄(한 명)씩 검사
        scanf("%d %d %d",&n1,&n2,&n3);
        // 3개 공통
        if ((n1 == n2) && (n1 == n3)){
            temp = 10000 + (n1*1000);
        // 2개 공통 
        } else if ((n1==n2)||(n2==n3))
        {
            temp = 1000 + (n1 * 100);
        } else if ((n2==n3)){
            temp = 1000 + (n2 * 100);
        } // 공통 x
        else {
            if ((n1>n2)&&(n1>n3)){
                temp = n1 * 100;
            } else if(n2 > n3){
                temp = n2 * 100;
            }else{
                temp = n3 * 100;
            }
        }
        if (total < temp){
            total = temp;
        }
        
    }
    printf("%d",total);

}