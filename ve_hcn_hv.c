#include<stdio.h>
int main(){
    int cd,cr;
    printf("Nhap cd, cr:");
    scanf("%d%d",&cd,&cr);
    for (int i=1;i<=cr;i++){
        for (int j=1;j<cd;j++){
            printf("* ");
        }
        printf("*\n");
    }
    return 0;
}