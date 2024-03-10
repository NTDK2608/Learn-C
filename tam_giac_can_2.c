#include<stdio.h>

int main(){
    int h;
    printf("Hay nhap chieu cao vao:");
    scanf("%d",&h);
    for (int i=h; i>=1;i--){
        for (int j=1;j<=h;j++){
            if (i>h-j){
                printf(" *");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}