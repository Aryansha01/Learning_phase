#include<stdio.h>
int main(){
    int n;
    printf("enter the numbers of rows : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int a=65;
        char ch = (char)a;
        for(int j=0;j<=i;j++){
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}