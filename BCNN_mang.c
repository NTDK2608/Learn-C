#include<stdio.h>

//Hàm tìm số lớn nhất
int max(int a[], int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
//Hàm tìm BCNN của mảng
int find(int a[], int n){
    int BoiSo=max(a,n);
    for(int i=0;i<n;i++){
        if(BoiSo % a[i] !=0){
            BoiSo+=max(a,n);
            i=-1;
        }
    }
    return BoiSo;
}
int main(){
    int a[]={1,7,3,5,3,2,6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d",find(a,n));
    return 0;
}
