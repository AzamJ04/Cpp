#include<iostream>
using namespace std;
int main(){
    // AND

    cout << (2 & 3) << endl;
    cout << (5 & 10) << endl; 

    // OR

    cout << (2 | 3) << endl;
    cout << (5 | 10) << endl;

    // NOT

    cout << ~1 << endl;

    // XOR

    cout << (5 ^ 5) << endl;
    cout << (5 ^ 10) << endl;


    // left and right shift

    cout << (2 << 3) << endl;
    cout << (5 >> 1) << endl;


    // pre/post inc/decrement operator

    int n1=10;
    int n2=10;
    cout << (++n1) << endl; // increment then print
    cout << (n2++) << endl; // print then increment


    int a=10;
    cout << ((++a)*(a++)) << endl;


    // break and continue

    for(int i=0;i<10;i++){
        if(i==3 || i==5){
            continue;
        }
        if(i==8){
            break;
        }
        cout << i << endl;
    }
      
}