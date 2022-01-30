/* 
A B C D
A B C D
A B C D
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n; col++){
            char ch = 'A' + col - 1;
            cout<<ch<<" ";

            
        }
        cout<<endl;
    }
    return 0;
}