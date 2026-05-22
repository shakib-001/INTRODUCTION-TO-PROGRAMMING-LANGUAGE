#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i=0;
    while (i<t)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int day=m1*d;
        int a=m1+m2;
        int update=day/a;
        int final=d-update;
        printf("%d\n",final);
        i++;
    }
    return 0;
}