// 

#include<stdio.h>
#include<limits.h>
int main(){
    int X;
    scanf("%d",&X);
    int a;
    int max=INT_MIN;
    for(int i=1;i<=X;i++){
        scanf("%d\n",&a);
        if(a>max){
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}