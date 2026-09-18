#include <stdio.h>
void num(int i) {
    if (i == 0) return;
    printf("%d", i);         
    if (i > 1) printf(" ");   
    num(i - 1);              
}
int main() {
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}
