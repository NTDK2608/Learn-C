#include<stdio.h>

int main(){
    int n, a[10000];
    do{
        printf("Hay nhap so nguyen duong n:");
        scanf("%d",&n);
    }while(n<=0);
    int i=0;
    do{
        a[i]=n%2;
        n=n/2;
        i++;
    }while(n!=0);
    printf("So nhi phan la:");
    for (int j=i;j>=0;j--){
        if(j==i){
            continue;
        }else{
            printf("%d",a[j]);
        }
    }
    return 0;
}