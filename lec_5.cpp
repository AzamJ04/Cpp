

#include<iostream>
using namespace std;
int main(){

    // // conditionals if-else block 

    // // check whether the given number is positive, negative or zero

    // int num1;
    // cout << "Enter the number: ";
    // cin >> num1;

    // if(num1 > 0){
    //     cout << "Number is Positive" << endl;
    // }

    // else if(num1 < 0){
    //     cout << "Number is Negative" << endl;
    // }

    // else{
    //     cout << "Number is Zero" << endl;
    // }

    // // check whether the number is even or odd

    // int num2;
    // cout << "Enter the number: ";
    // cin >> num2;

    // if(num2 % 2 == 0){
    //     cout << "Number is Even" << endl;
    // }

    // else{
    //     cout << "Number is Odd" << endl;
    // }


    // // for loop

    // // wap to print "azam" 5 times

    // for(int i=1; i<=5; i=i+1){
    //     cout << "azam" << endl; 
    // }

    // // wap to print no. from 10 to 0

    // for (int i=10; i>=0; i=i-1){
    //     cout << i << endl;
    // }

    // // nested loop

    // for(int i=1; i<4; i=i+1){
    //     cout << "outer loop" << i << endl;

    //     for(int j=1; j<4; j=j+1){
    //         cout << "inner loop" << j << endl;
    //     }

    //     cout << endl;
    // }

    // // use of for in different way

    // int k=10;
    // for(; ;){
    //     if(k>0){
    //         cout << k << endl;
    //         k=k-1;
    //     }
    // }


    // // print table of 19

    // for(int i=1; i<=10; i=i+1){
    //     cout << 19*i << endl;
    // }


    // // print even no. from 1 to 100

    // for(int i=1; i<=100; i=i+1){
    //     if(i%2==0){
    //         cout << i << endl;
    //     }
    // }


    // // print square pattern

    // for(int i=0; i<4; i=i+1){
    //     for(int j=0; j<4; j=j+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // // new pattern

    // for(int row=0; row<5; row= row+1){

    //     for(int col=0; col<5; col=col+1){

    //         if(row==0 || row==4){

    //             cout << "* ";
    //         }
  
    //         else{

    //             if(col==0 || col==4){
    //                 cout << "* ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    // // half pyramid

    // for(int row=0; row<5; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
        
    // }


    // // inverted half pyramid


    // for(int row=0; row<5; row=row+1){

    //     for(int col=0; col<5-row; col=col+1){
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }


    // // numeric half pyramid

    // for(int row=0; row<5; row =row+1){
    //     for(int col=0; col<row+1; col=col+1){ 
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    // // inverted numeric half pyramid

    // for(int row=0; row<5; row=row+1){
    //     for(int col=0; col<5-row; col=col+1){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    // // full pyramid

    // int n;
    // cin>>n;


    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout << " ";
    //     }

    //     for (int col=0; col<row+1; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // // inverted full pyramid

    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row; col++){
    //            cout << " ";
    //     }
    //     for(int col=0; col<n-row; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // * * * *  * * * *
    // // * * *      * * *
    // // * *          * *
    // // *              *
    // // * *          * *
    // // * * *      * * *
    // // * * * *  * * * *

    // int num;
    // cin>>num;
    // int n=num/2;

    // for(int row=0; row<n; row++ ){
    //     // inverted half py 1
    //     for(int col=0; col<n-row; col++){
    //         cout << "* ";
    //     }

    //     // full py space

    //     for(int col=0; col<2*row +1; col++){
    //         cout << "  ";
    //     }

    //     // inverted py 2
  
    //     for(int col=0; col<n-row; col++){
    //         cout << "* ";
    //     }
    //     cout <<endl;      
    // }

    // for(int row=0; row<n; row++){
    //     // inverted half py 1
    //     for(int col=0; col<row+1; col++){
    //         cout << "* ";
    //     }

    //     // full py space

    //     for(int col=0; col<2*n-2*row -1; col++){
    //         cout << "  ";
    //     }

    //     // inverted py 2
  
    //     for(int col=0; col<row+1; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // 1
    // // 2*2
    // // 3*3*3
    // // 4*4*4*4


    // for(int row=0; row<4; row++){
    //     for(int col=0; col<2*row+1; col++){
    //         if(col%2!=0){
    //             cout << "*";
    //         }
    //         else{
    //             cout << row+1;
    //         }
    //     }
    //     cout << endl;
    // }


    // // * * * * *
    // // *     *
    // // *   *
    // // * * 
    // // * 

    // int n;
    // cin>> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col< n-row; col++){

    //         if(row==0 || row==n-1){
    //             cout << "*";
    //         }
    //         else{
    //             if(col==0 || col== n-row-1){
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
            
    //     }
    //     cout << endl;
    // }

    // // A
    // // AB 
    // // ABC
    // // ABCD
    // // ABCDE

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         char ch= col+1+'A'-1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // // 1 
    // // 1 2
    // // 1   3
    // // 1     4
    // // 1 2 3 4 5

    // for(int row=0; row<6; row++){
    //     for(int col=0; col<row; col++){
    //         if(row==0 || row==5){
    //             cout << col+1 << " ";
    //         }
    //         else{
    //             if(col==0 || col==row-1){
    //                 cout << col+1 << " ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4 5
    // 1     4
    // 1   3
    // 1 2
    // 1

    

}