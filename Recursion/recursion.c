#include<stdio.h>
void mello(){
    printf("Mello\n");
}
void gello(){
    printf("GEllo\n");
    gello();
}
void hello(){
    printf("HEllo\n");
    gello();
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}