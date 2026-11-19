#include <stdio.h>
#define MIN(a,b) ((a<b)?(a):(b))
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Minimum of two numbers is:%d\n",MIN(x,y));
    return 0;
}