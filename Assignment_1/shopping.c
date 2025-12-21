#include<stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    if(N>1000){
        printf("I will buy Punjabi\n");
        int M=N-1000;
        if(M>=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else{
        printf("Bad luck!");
    }
    return 0;
}