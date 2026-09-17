#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int length = strlen(s);
    for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[10001];
    scanf("%s",s);
    int ans= is_palindrome(s);
    if(ans==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
return 0;
}