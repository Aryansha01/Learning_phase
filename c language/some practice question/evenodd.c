#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    if(n%2==0)
    {
     printf("The entered number is even");   
    }
    else{
        printf("The number is odd");
    }
    return 0;
}