#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int pos=0;
    int neg=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            pos=pos+arr[i];
        }
        else{
            neg+=arr[i];
        }
    }
    printf("%d ",pos);
    printf("%d",neg);
    return 0;
}