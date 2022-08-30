#include <iostream>
using namespace std;
int main(){
    int row=1,col=1,num;
    cout<<"enter a no";
    cin>>num;
    while(row<=num){
        while (col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}