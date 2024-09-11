// hollow half pyramid
// *
// * *
// *   * 
// *     *
// * * * * *


#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<5; row=row+1){
        for(int col=0; col<row+1; col++){
            if(row==0 || row==4){
                cout << "* ";
            }
            else{
                if(col==0 || col==row){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}