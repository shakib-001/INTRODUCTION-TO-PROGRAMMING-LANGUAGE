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
    if(r==c){
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i!=j){
                    if(a[i][j]!=0){
                        count++;

                    }
                }
        }
    }
    if(count==0){
            printf("its diagonal");
        }
        else{
            printf("its not a diagonal matrix");
        }
}
    else{
        printf("its not diagonal");
    }
}