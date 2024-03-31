#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so pha tu trong mang:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Hay nhap phan tu thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int i=0;i<n;i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    printf("Phan tu lon nha trong mang la:%d",max);
    return 0;
}