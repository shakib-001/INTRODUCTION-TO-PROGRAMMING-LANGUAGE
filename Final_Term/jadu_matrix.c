#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cout=1;
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    if(a[i][j]!=1){
                        cout=0;
                    }
                }
                else if(i+j==n-1){
                    if(a[i][j]!=1){
                        cout=0;
                    }
                }
                else{
                    if(a[i][j]!=0){
                        cout=0;
                    }
                }
            }
        }
        if(cout==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}