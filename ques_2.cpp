// filled square pattern with general value n

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n; col++){
            cout << "* ";
        }
        cout << endl;
    }
}