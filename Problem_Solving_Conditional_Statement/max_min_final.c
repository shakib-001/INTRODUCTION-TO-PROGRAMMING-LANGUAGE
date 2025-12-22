#include<stdio.h>
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    if(a<=b && a<=c){
        printf("%lld",a);
        printf(" ");
         if(a>=b && a>=c){
        printf("%lld",a);
    }
    else if(b>=a && b>=c){
        printf("%lld",b);
    }
    else{
        printf("%lld",c);
    }
    }
    else if (b<=a && b<=c)
    {
        printf("%lld",b);
        printf(" ");
         if(a>=b && a>=c){
        printf("%lld",a);
    }
    else if(b>=a && b>=c){
        printf("%lld",b);
    }
    else{
        printf("%lld",c);
    }
    }
    else{
        printf("%lld",c);
        printf(" ");
         if(a>=b && a>=c){
        printf("%lld",a);
    }
    else if(b>=a && b>=c){
        printf("%lld",b);
    }
    else{
        printf("%lld",c);
    }
    }
    return 0;
}