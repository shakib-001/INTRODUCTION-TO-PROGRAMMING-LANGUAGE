#include<stdio.h>
void num(int n,int i){
    if(n==0){
        return;
    }
    if(i>n){
        return;
    }
    num(n,i+1);
    if(i==1){
        printf("%d",i);
    }
    else{
        printf("%d ",i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    num(n,1);
    return 0;
}