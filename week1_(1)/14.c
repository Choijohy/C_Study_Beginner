#include <stdio.h>

int main(void){
    int a[10], b[10], i, aWin, bWin;
    aWin = 0;
    bWin = 0;


    for(i=0; i<10 ; i++){
        //scanf("%d",&num);
        //a[i] = num;
        scanf("%d",&a[i]);
    }
    for (i=0; i<10; i++) {
        scanf("%d",&b[i]);
    }
    

    // for (i=0;i<10;i++){
    //     printf("%d ",a[i]);
    //     printf("%d ",b[i]);
    // }
    

    for (i=0; i<10; i++){
        if (a[i]>b[i]){
            aWin+=1;
        }else if (a[i] < b[i]){
            bWin += 1;
        }
    }

    if (aWin > bWin){
        printf("A");
    }else if(aWin < bWin){
        printf("B");
    }else{
        printf("D");
    }
    
}