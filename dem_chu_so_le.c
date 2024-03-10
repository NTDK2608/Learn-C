#include<stdio.h>
int main(){
    int n; //Khai báo số nguyên n
    do{
        printf("\nHay nhap so nguyen duong n vao:");
        scanf("%d",&n);
        if(n<=0){
            printf("Hay nhap so nguyen duong!");
        }
    }while(n<=0);
    int temp=n,count=0;//Gán biến n cho temp và 0 vào count
    while(temp!=0){
        if(temp%2==1)count++;
        temp=temp/10;
    }
    printf("So chu so le cua %d la:%d",n,count);
    return 0;
}