/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4 */
#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n; col++){
            cout<<n-col+1<<" "; 
        }
        cout<<endl;
    } 
    
} 