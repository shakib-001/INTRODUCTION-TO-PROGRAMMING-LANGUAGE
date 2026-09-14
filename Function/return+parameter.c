#include<stdio.h>

// return_type function_name(parameter){

//     return

// }

int sum(int num1,int num2){
    int ans=num1+num2;
    return ans;
}

int sub(int num1,int num2){
    int ans=num1-num2;
    return ans;
}
int main(){
    int val=sum(34,54);
    int val1=sum(34,4);
    int val2=sub(34,4);
    printf("%d %d %d",val,val1,val2);
    return 0;
}