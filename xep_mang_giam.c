#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
    int a[n];
    printf("Nhap cac phan tu mang:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int smaller=a[i];
                a[i]=a[j];
                a[j]=smaller;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}