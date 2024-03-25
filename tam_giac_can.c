#include<stdio.h>

int main(){
    int h;
    printf("Hay nhap chieu cao vao:");
    scanf("%d",&h);
    for (int i=1;i<=h;i++){
        for (int j=1;j<=2*h-1;j++){
            if(j>=1+(h-i) && j<=h+i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}