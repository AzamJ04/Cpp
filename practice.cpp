#include<iostream>
using namespace std;

void print_prime(int n){
    int flag=0;
    for(int i=2;i<=n;i++){
        cout << i;
        for(int j=2;j<=(n/2);j++){
            if(i%j==0){
                break;
            }
            else{
                flag++;
            }
        }
        if(flag!=0){
            cout << i << endl;
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    print_prime(n);

}