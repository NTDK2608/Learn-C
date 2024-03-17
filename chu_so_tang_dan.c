#include<stdio.h>

int main(){
    int n;
    do{
        printf("Nhap so nguyen duong n vao:");
        scanf("%d",&n);
    }while(n<=0);
    int temp;
    temp=n;
    int Check=1, ChuSoCuoi=n%10;
    n=n/10;
    while(n!=0){
        int ChuSoKeCuoi=n%10;
        if(ChuSoKeCuoi>ChuSoCuoi){
            Check=0;
            break;
        }else{
            n=n/10;
            ChuSoCuoi=ChuSoKeCuoi;
        }
    }
    printf("%d co tang dan tu trai sang phai khong: ",temp);
    if(Check==1){
        printf("Yes!");
    }else{
        printf("No!");
    }
    return 0;
}