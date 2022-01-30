/*
A B C
B C D
C D E
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n; col++){
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}