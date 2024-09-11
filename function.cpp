#include<iostream>
using namespace std;

void printLine(){
    for(int i=0; i<5; i++){
        cout << "azam" << endl;
    }
}

void sum(int n1,int  n2){
    cout << n1+n2 << endl;
}

int max_no(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

void print_1ton(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}


// fun declaration
void dec();

void sumfrom1ton(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout << "sum from 1 to n: "<< sum<<endl;
}

void sumofevenfrom1ton(int n){
    int sum=0;
    for(int i=0;i<=n;i+=2){
        sum+=i;
    }
    cout << "sum of even no from 1 to n: "<<sum<<endl;
}

// check prime no

bool checkprime(int n){
    for(int i=2;i<n;i++){
        int a=0;
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// main function
int main(){
    
    printLine();
    dec();
    sum(1,2);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout << "maximum no: " << max_no(n1,n2,n3) << endl;

    int n;
    cout << "enter value of n: ";
    cin>>n;
    print_1ton(n);
    sumfrom1ton(n);
    sumofevenfrom1ton(n);

    bool prime=checkprime(n);
    if(prime){
        cout<<"prime no."<<endl;
    }
    else{
        cout << "not prime"<<endl;
    }

}

void dec(){
    cout << "this is function decleration";
}