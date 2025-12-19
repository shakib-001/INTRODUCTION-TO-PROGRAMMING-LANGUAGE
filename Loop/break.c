#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
         if(i==9){
            break;
        }
        printf("%d\n",i);
       
    }
}