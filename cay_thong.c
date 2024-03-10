#include<stdio.h>
void caythong(int h){
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
    for (int n=1;n<=h;n++){
        if(n<=h-1){
            printf(" ");
        }else{
            printf(" *");
        }
    }
    printf("\n\n");
}
int main(){
    int t,m;
    printf("Hay nhap so tang:");
    scanf("%d",&t);
    printf("Hay nhap so cay thong:");
    scanf("%d",&m);
    for (int k=1;k<=m;k++){
        caythong(t);
    }
    return 0;
}
