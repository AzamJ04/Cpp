// calculator

#include<iostream>
using namespace  std;
int main(){
    int num1;
    int num2;
    cout << "Enter two no: ";
    cin >> num1 >> num2;
    int op;
    // 1.add 2.sub 3.multiply 4.divide or invalid
    cout << "Enter choice: ";
    cin >> op;
    int ans=0;
    switch(op){
        case 1:
            ans=num1+num2;
            break;
        case 2:
            ans=num1-num2;
            break;
        case 3:
            ans=num1*num2;
            break;
        case 4:
            ans=num1/num2;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 0;
        
    }
    cout <<"answer: "<<ans<<endl;
    return 0;
}