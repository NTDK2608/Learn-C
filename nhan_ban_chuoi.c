#include<stdio.h>
#include<string.h>
//Hàm nhân bản chuỗi
void rep(char str[], int n){
    int l=strlen(str);
    for(int i=1;i<n;i++){
        for(int j=0;j<l;j++){
            str[l*i+j]=str[j];
        }
    }
    int j=n-1;
    str[l*j+l]='\0';
}
int main(){
    char str[100];
    int n;
    gets(str);
    scanf("%d",&n);
    rep(str,n);
    printf("%s",str);
    return 0;
}
