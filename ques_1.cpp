#include<iostream>
using namespace std;

int main() {
	char c;
    cout << "Enter char here: ";
    cin>>c;
    cout << "your char: " << c << endl;
    if(c>='a' && c<= 'z'){
        cout<<0 << endl;
    }
	else if(c>='A' && c<= 'Z'){
        cout<<1 << endl;
    }
    else{
        cout<<-1 << endl;
    }
}