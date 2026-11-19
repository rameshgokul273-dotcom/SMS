#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(){
    int num;
    scanf("%d",&num);
    printf("The square of %d is:%d",num,SQUARE(num));
}