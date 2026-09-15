#include<stdio.h>
int main(){
    int a[5]={43,54,33,23,52};
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);

    printf("array er 0 th index er address: %p\n",&a[0]);
    printf("%d\n",*a);
    *(a+2)=300;
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}