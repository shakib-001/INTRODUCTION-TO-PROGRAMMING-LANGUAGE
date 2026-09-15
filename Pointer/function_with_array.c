#include<stdio.h>

void fun(int a[]){
    a[1]=200;
    a[3]=200;
}


int main(){
    int a[5]={43,54,33,23,52};
    fun(a);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}