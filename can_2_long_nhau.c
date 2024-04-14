#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float daycan(int n){
    if (n==1) return sqrt(2);
    return sqrt(2+daycan(n-1));
}
int main(){
    int n;
    printf("Hay nhap vi tri can tinh vao:");
    scanf("%d",&n);
    printf("Gia tri cua day tai vi tri thu %d la: %.5f",n,daycan(n));
    return 0;
}