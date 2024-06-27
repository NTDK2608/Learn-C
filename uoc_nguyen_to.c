#include<stdio.h>

int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        //in các ước nguyên số của n ra 
        if(prime(i)) printf("%d ",i);
    }
    return 0;
}
