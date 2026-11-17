#include <stdio.h>
int treasure(int a, int b, int Matrix[a][b]);
int main(){
    int M,N;
    printf("Enter the number of rows:");
    scanf("%d",&M);
    printf("Enter the number of columns:");
    scanf("%d",&N);
    int Mat[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&Mat[i][j]);
            if (Mat[i][j]<0){
                printf("Non negative integer should be entered\n");
                j=j-1;
            }
        }
    }
    treasure(M,N,Mat);
}
int treasure(int a,int b,int Matrix[a][b]){
    for(int k=0;k<a;k++){
        for(int l=0;l<b;l++){
            for(int m=0;m<a;m++){
                for(int n=0;n<b;n++){
                    if(Matrix[k][l]>=Matrix[k][n] && Matrix[k][l]>=Matrix[m][l]){
                        printf("Treasure location at %d row and %d column\n",k,l);
                        break;
                    }
                }
            }
        }
    }
}