#include<stdio.h>
int main(){
    int n; //Khai báo số nguyên n
    printf("Hay nhap so nguyen duong n vao:");
    scanf("%d",&n);
    while(n<=0){
        printf("Hay nhap so nguyen duong vao!");
    }
    int temp=n, count=0;
    while(temp!=0){ //Mỗi giá trị temp khác 0 thì count tăng lên 1
        count++;
        temp=temp/10;
    }
    printf("So chu so cua so nguyen %d la: %d",n,count);
    return 0;
}