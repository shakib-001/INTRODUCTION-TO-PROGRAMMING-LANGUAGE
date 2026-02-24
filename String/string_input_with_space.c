#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    // scanf("%s",&s);
    // gets(s);
    // fgets(s,size,stdin)
    fgets(s,20,stdin);
    printf("%s",s);
}