#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if(ch>='a' && ch<='z'){
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else{
        printf("IS DIGIT");
    }
    return 0;
}