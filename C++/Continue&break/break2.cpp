#include<iostream>
using namespace std;
int main(){
    for(int i = 0 ; i<=5 ;i++){
        for(int j = 1;j<=5;j++){
            if(i+j==7){
                break;
            }
            cout<<i<<" "<<j<<endl;
    }
    }
}