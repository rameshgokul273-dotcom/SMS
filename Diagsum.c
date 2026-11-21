#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int M[N][N];
    printf("Enter matrix elements:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&M[i][j]);
        }
    }
    int dsum=0;
    printf("Main Diagonal elements:");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
          if(i==j){
             printf("%d ",M[i][j]);
             dsum+=M[i][j];
          }
        }
    }
    printf("\nSum of diagonal elements:%d",dsum);
}