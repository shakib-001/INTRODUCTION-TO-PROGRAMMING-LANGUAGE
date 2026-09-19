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
    int flag=100;
    if(r==c){
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){
                   //its are diagonal
                }
                else{
                    // we are now at outside diagonal
                    if(a[i][j]!=0){
                        flag==500;
                        printf("this is not primary diagonal matrix");
                    }
                }
        }
    }
    if(flag==100){
            printf("its diagonal");
        }
}
    else{
        printf("its not diagonal");
    }
}