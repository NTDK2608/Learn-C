#include<stdio.h>

int main(){
    int n, temp;
    do{
        printf("Nhap so nguyen duong n vao:");
        scanf("%d",&n);
    }while (n<0);
    temp=n;
    int min=n%10,i;
    if(n==0){
        min=0;
    }
    do{
        i=n%10;
        if(i<min){
            min=i;
        }
    }while(n=n/10);
    printf("Chu so nho nhat cua so %d la: %d",temp,min);
    return 0;
}