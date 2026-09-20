#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        long long int m,a,b,c,d,e;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        e=a*b*c;
        d=m/e;
        if(m%e==0){
            printf("%lld\n",d);
        }
        else{
            printf("-1\n");
        }
    }
}