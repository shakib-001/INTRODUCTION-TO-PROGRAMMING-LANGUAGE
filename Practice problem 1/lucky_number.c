#include<stdio.h>
int main(){
    int m,a,b;
    scanf("%d",&m);
    a=m/10;
    b=m%10;
    if(b==0){
        printf("YES");
    }
    else if(a%b==0 || b%a==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}