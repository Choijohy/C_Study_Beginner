#include <stdio.h>

#include <stdio.h>

int main(void){
    int n,m,i,temp;
    scanf("%d %d",&n,&m);
    temp = 0;
    //n=1 m=7
    for (i=n; m >= i; i++){ // i= n, n+1, n+2...m-2,m-1,m
        if(temp<7){
            printf("%d ",i);
            temp ++;
        } else if(temp == 7){
            printf("%d\n",i);
            temp = 0;
        } 
    }
}