#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so nguyen n vao: ");
    scanf("%d",&n);
    int a[10000],k=0;
    for (int i=2;i<=n;i++){
        if(n%i==0){
            a[k]=i;
            k++;
        }
    }
    // for (int z=0;z<k;z++){
    //     printf("%d ",a[z]);
    // }
    printf("Cac uoc so nguyen to cua %d la: ",n);
    for (int j=0;j<k;j++){
        int temp=0;
        for(int l=2;l*l<=a[j];l++){
            if(a[j]%l==0){
                temp++;
            }
        }
        if(temp==0){
            printf("%d ",a[j]);
        }
    }
    return 0;
}