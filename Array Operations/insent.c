#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a+1];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=a;i>=m+1;i--){
       arr[i]=arr[i-1]; 
    }
    for(int i=0;i<=a;i++){
        arr[m]= n;
        printf("%d ",arr[i]);
    }
}