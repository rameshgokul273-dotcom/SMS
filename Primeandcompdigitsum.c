#include <stdio.h>
#include <math.h>
int sum(int *num,int *psum,int *npsum);
int main(){
    int N,primesum,compsum;
    scanf("%d",&N);
    sum(&N,&primesum,&compsum);
    printf("Prime digit sum=%d\n",primesum);
    printf("Non Prime digit sum=%d\n",compsum);
    if(primesum>compsum){
        printf("Absolute difference=%d\n",primesum-compsum);
    }
    else{
        printf("Absolute difference=%d\n",compsum-primesum);
    }

    return 0;
}
int sum(int *num,int *psum,int *npsum){
    *psum = 0;
    *npsum = 0;
    while(*num>0){
        int digit = *num%10;
        int R = 0;
        for(int i=1;i<=digit;i++){
            if(digit%i==0){
               R++;
            }
        }
        if(R==2){
            *psum+=digit;
        }
        else{
            *npsum+=digit;
        }
        R = 0;
        *num = *num/10;
    }
}