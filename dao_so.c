#include<stdio.h>

void dao(int n){
    int a;
    do{
        a=n%10;
        printf("%d",a);
        n=n/10;
    }while(n!=0);
}
int main(){
    int n;
    printf("Hay nhap so nguyen duong n vao:");
    scanf("%d",&n);
    printf("So nghich dao cua %d la:");
    dao(n);
    return 0;
}