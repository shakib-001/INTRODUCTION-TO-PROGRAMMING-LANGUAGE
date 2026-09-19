#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    // for (int i=0;i<r;i++){
    //     if(i==n){
    //         for(int j=0;j<c;j++){
    //             printf("%d ",a[i][j]);
    //         }
    //     }
    // }
    // for(int i=0;i<c;i++){
    //     printf("%d ",a[n][i]);   //row print
    // }
     for(int i=0;i<r;i++){
        printf("%d ",a[i][n]);   //row print
    }
}