// #include<stdio.h>
// // int x=3344;  //global variable
// void sum(){
//     int x=44;
//      printf("%d",x);
// }
// int main(){
//     int x=37;
//     printf("%d\n",x);
//     sum();
//     return 0;
// }

#include<stdio.h>
int x=3344;
void sum(){
   
     printf("%d",x);
}
int main(){
    printf("%d\n",x);
    sum();
    return 0;
}