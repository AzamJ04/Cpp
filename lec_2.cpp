
#include <iostream>
using namespace std;
int main(){

    // print "azam"

    cout <<"azam" << endl;

    // print "azam" & "jamal" in different lines
    // can also use \n 

    cout <<"azam" << endl;
    cout <<"jamal" << endl;

    // int 
    int num=50;
    cout << num << endl;
    cout << sizeof(num) << endl;

    // char 
    char ch='k';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    // float
    float f=1.96;
    cout << f << endl;
    cout << sizeof(f) << endl;

    // long 
    long l=23;
    cout << l << endl;
    cout << sizeof(l) << endl;

    // garbage value
    float n;
    cout << n << endl;

    // arithmetic operators

    int a= 5;
    int b= 10;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << b/a << endl;
    cout << b %a << endl;

    // relational operators

    int c= 5;
    int d= 10;

    cout << (c>d) << endl;
    cout << (c<d) << endl;
    cout << (c<=d) << endl;
    cout << (c>=d) << endl;
    cout << (c!=d) << endl;
    cout << (c==d) << endl;

    // taking input from user

    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Marks: " << marks << endl;


}
