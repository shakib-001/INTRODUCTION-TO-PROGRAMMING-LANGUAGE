#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0){
        //invalid
    }
    else {
        int a =(n+ 11)/2;
        int star=1;
        int spc=a- 1;
        for (int i=0;i<a;i++) {
            for (int k=0;k<spc;k++) {
                printf(" ");
            }
            for (int j=0;j<star;j++) {
                printf("*");
            }
            printf("\n");
            star +=2;
            spc--;
        }
        int c=5;
        for (int i=0;i<c;i++) {
            for (int k=0;k<c;k++) {
                printf(" ");
            }
            for (int j=0;j<n;j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
