#include<stdio.h>
int main(){
    int h;
    printf("Hay nhap chieu cao vao:");
    scanf("%d",&h);
    for (int i=1;i<=h;i++){
        for (int j=1;j<=h;j++){
            if(j<=h-i){
                printf(" ");
            }else{
                printf(" *");
            }
        }
        printf("\n"); 
    }
    return 0;
}