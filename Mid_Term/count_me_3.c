#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i=0;
    while (i<t)
    {
        char a[10001];
        scanf("%s",a);
        int capital=0, small=0,digit=0;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]>='A' && a[i]<='Z'){
                capital++;
            }
            else if(a[i]>='a' && a[i]<='z'){
                small++;
            }
            else if(a[i]>='0' && a[i]<='9'){
                digit++;
            }
        }
        printf("%d %d %d\n",capital,small,digit);
        i++;
    }
    return 0;
}