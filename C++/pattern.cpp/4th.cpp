#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int count = row;
        while(col<=row){
            cout<<count<<" ";
            col = col + 1;
            count = count + 1;
        }
        cout<<endl;
        row = row + 1;

}
}