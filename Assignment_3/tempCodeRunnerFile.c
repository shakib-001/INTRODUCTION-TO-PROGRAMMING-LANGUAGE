#include<stdio.h>
int is_palindrome(char s[]){
    int length = strlen(s);
    for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-i-1]){
            return 1;