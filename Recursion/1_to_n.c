#include<stdio.h>
void num(int n,int i){
    if(i>n){
        return;
    }
    printf("%d\n",i);
    num(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    num(n,1);
}