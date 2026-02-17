#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            printf("1 ");
        }
        else if(arr[i]<0){
            printf("2 ");
        }
        else{
            printf("0 ");
        }
    }
    return 0;
}