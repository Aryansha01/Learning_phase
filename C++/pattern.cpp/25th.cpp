#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int row = 1;
    int count = 1;
    while(row<=n){
        int space = row - 1;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        
        while(col<=n - row + 1){
            cout<<count;
            col++;
            count++;
        }
        
        cout<<endl;
        row++;
    }
}