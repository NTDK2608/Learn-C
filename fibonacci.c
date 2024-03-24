#include<stdio.h>

int f(int n){
    if (n==1 || n==2) return 1;
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    printf("Hay nhap vi tri so fibonacci can tinh:");
    scanf("%d",&n);
    printf("So fibonacci vi tri %d:%d",n,f(n));
    return 0;
}