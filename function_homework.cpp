#include<iostream>
using namespace std;

// area of circle
float area_circle(int n1){
    float area= 3.14 * n1 * n1 ;
    return area;
}

// factorial of no.
int factor(int n2){
    int ans=1;
    for(int i=1;i<=n2;i++){
        ans=ans*i;
    }
    return ans;
}

// find even or odd using bitwise 
string even_odd(int n3){
    if((n3 & 1)==0){
        return "even";
    }
    else{
        return "odd";
    }

}

// print prime no. from 1 to n
bool check_prime(int n4){
    for(int i=2;i<n4;i++){
        if(n4%i==0){
            return false;
        }
    }
    return true;
}

// count no. of set bits
int check_setbits(int n5){
    int count=0;
    while(n5 >0){
        if(n5%2!=0){
            count++;
        }
        n5=n5/2;
    }
    return count;
}

// count no. of set bits using bitwise and
int check_setbits_bitwise(int n6){
    int count=0;
    while(n6){
        int bit = n6&1;
        if(bit){
            count++;
        }
        n6>>=1;
    }
    return count;
}

// create no. using digits given from user
int make_number(int n){
    int ans=0;
    int x;
    for(int i=0;i<n;i++){
        cout << "Give number: ";
        cin>>x;
        ans=ans*10 + x;
    }
    return ans; 
}

// print all digits of an integer
void print_digit(int n){
    while(n){
        int x1=n%10;
        n=(n-x1)/10;
        cout << x1 << ", ";
    }
}

int main(){

    // area of circle
    float radius;
    cout << "Radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area_circle(radius) << endl;

    // factorial of no.
    int fac;
    cout << "Enter no. to find its factorial: ";
    cin >> fac;
    cout << "Factorial of " << fac << " is: " << factor(fac) << endl;

    // even/odd using bitwise
    int num1;
    cout << "Enter no. to check even/odd: ";
    cin >> num1;
    cout << num1 << " is " << even_odd(num1) << endl;

    // print prime no. from 1 to n
    int num2;
    cout << "Enter no. till where to print prime: ";
    cin >> num2;
    for(int i=2; i<=num2; i++){
        bool isprime = check_prime(i);
        if(isprime){
            cout << i << " ";
        }
    }

    // count no. of set bits
    int num3;
    cout << "Enter no. to find set bits: ";
    cin >> num3;
    cout << "Number of set bits in " << num3 << " is: " << check_setbits(num3);

    // count no. of set bits using bitwise and
    int num4;
    cout << "Enter no. to find set bits: ";
    cin >> num4;
    cout << "Number of set bits in " << num4 << " is: " << check_setbits_bitwise(num4);
    
    // create no. using digits given from user
    int num5;
    cout << "How many no. to input: ";
    cin >> num5;
    int num=make_number(num5);
    cout << "Final number formed: " << num<< endl;

    // print all digits of an integer
    int num6;
    cout << "Enter no. to print digits: ";
    cin >> num6;
    print_digit(num6);
}