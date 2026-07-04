#include<stdio.h>
int add(int a,int b){
    return a+b;
}
void main(){
    int c,d;
    printf("Enter a and b value: ");
    scanf("%d %d",&c,&d);
    printf("%d",add(c,d));
}