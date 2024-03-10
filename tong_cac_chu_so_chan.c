#include<stdio.h>
int main(){
    int n; //Khai báo biến n
    do{
        printf("\nHay nhap so nguyen duong n vao:");
        scanf("%d",&n);
        if (n<=0){
            printf("Hay nhap so nguyen duong!"); //Yêu cầu nhập lại nếu n<=0
        }
    }while (n<=0); //Vòng lặp nếu n<=0
    int temp=n,sum=0;
    while (temp!=0){
        if(temp % 2 ==0){ //temp chẵn thì thực hiện
            sum=sum+temp%10; //cộng vào phần dư của temp khi chia cho 10
        }
        temp=temp/10; //chia temp cho 10 rồi lấy phần nguyên
    }
    printf("Tong cac chu so chan cua %d la: %d",n,sum);
    return 0;
}