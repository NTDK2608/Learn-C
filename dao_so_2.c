#include<stdio.h>

int dao(int n){
    int a=0;
    do{
        a=a*10 + n%10;
        n=n/10;
    }while(n!=0);
    return a;
}
int main(){
    int n;
    printf("Hay nhap so nguyen duong can nghich dao:");
    scanf("%d",&n);
    printf("So nghich dao cua %d la:%d",n,dao(n));
    return 0;
}