#include<stdio.h>
void star(int n){
    for(int i=0;i<n;i++){
        printf("*");
    }
}
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    star(a);
}