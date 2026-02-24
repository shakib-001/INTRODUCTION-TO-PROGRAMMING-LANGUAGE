#include<stdio.h>
int main(){
    int a=19;
    int b=33;
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}