#include<iostream>
using namespace std;

int main() {

    // // area of retctangle
	// double width, height;
	// cin >> width >> height;
	// double area = width * height;
	// cout << area << endl;

    // // convert binary to decimal
    // int n,sum=0,factor=1;
    // cin>>n;
    // while(n!=0){
    //     int digit = n%10;
    //     sum = sum + digit*factor;
    //     factor = 2*factor;
    //     n = (n-digit)/10;
    // }
    // cout<<sum;

    // print prime no from 2 to n
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }


    

}

