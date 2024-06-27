#include<stdio.h>
#include<string.h>
//Hàm tìm GTNN của mảng
int min(int a[], int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
//Hàm kiểm tra ước số chung
int check(int a[], int n, int UocSo){
    for(int i=0;i<n;i++){
        if(a[i] % UocSo != 0) return 0;
    }
    return 1;
}
//Hàm tìm ước số lớn nhất
int find(int a[], int n){
    for(int UocSo=min(a,n);UocSo>=1;UocSo--){
        if(check(a,n,UocSo)) return UocSo;
    }
    return 1;
}
int main(){
    int a[]={3,3,6,9,12,15};
    int n=sizeof(a)/sizeof(a[0]);
    if(find(a,n)==1) printf("1");
    else printf("%d",find(a,n));
    return 0;
}
