#include <stdio.h>

int main(void){
    int n,m,i,temp;
    scanf("%d %d",&n,&m);
    temp = 0;
    //n=1 m=7
    for (i=n; (m-i)>=0; i++){ // i= n, n+1, n+2...m-2,m-1,m
        if(temp<8){
            printf("%d ",i);
            temp +=1;
        } else{ 
            printf("\n%d ",i);
            temp = 0;
        }  
    }
}