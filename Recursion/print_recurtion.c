#include<stdio.h>
void add(int n,int i){
    if(i==n){
        return;
    }
    printf("I love Recursion\n");
    add(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    add(n,0);
    return 0;
}