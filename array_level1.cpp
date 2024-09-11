#include<iostream>
#include<limits.h> // vscode compiler works without this line
using namespace std;

// print array function
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i]  << " ";
    }
    cout << endl;
}

// finding target using function
bool linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            // target found
            return true;
        }
    }
    // not found 
    return false;
}

// function to find no. of 0 and 1 in array
void find_0and1(int arr[],int size){
    int count1=0;
    int count0=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==0){
            count0++;
        }
    }

    cout << "No. of 1's: " << count1 << endl;
    cout << "No. of 0's: " << count0 << endl;

}

// find minimum no. of an array
int find_min(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    return minAns;
}

// reverse an array
void reverse_array(int arr[],int size){
    // reversing
    int left=0;
    int right=size-1 ;

    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    // printing array
    cout << "Final array: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// extreme print array
void extremePrint(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left==right){
            cout << arr[left];
        }
        else{
            cout << arr[left] << " " << arr[right] << " ";
        }
        
        left++;
        right--;
    }
}


///////////////////////////////////////////////////////////////////////
// main function
int main(){

    // initializing array
    int arr[5]={5,8,9,12,13};
    cout << arr[0] << endl;
    cout << arr[1] << endl;

    // printing array
    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }

    // taking input
    int brr[5];
    for(int i=0;i<5;i++){
        cout << "Enter value of index " << i << " : ";
        cin >> brr[i];
    }

    cout << "printing array: " ;

    for(int i=0;i<5;i++){
        cout << brr[i] << " ";
    }

    cout << endl;


    // make array of size 10; take input ; then double each value
    int crr[10];
    // taking input
    for(int i=0;i<10;i++){
        cout << "Enter value at " << i << " index: ";
        cin >> crr[i];
    } 
    // or
    cout << "Enter value: ";
    for(int i=0; i<10;i++){
        cin>>crr[i];
    }
    // doubling value
    for(int i=0;i<10;i++){
        crr[i]=2*crr[i];
    }
    // printing array
    cout << "Final array: ";
    for(int i=0;i<10;i++){
        cout << crr[i] << " ";
    }
    cout << endl; 


    // make array of size; take input; print their sum
    int drr[5];
    cout << "Enter value:";
    for(int i=0;i<5;i++){
        cin>>drr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=drr[i];
    }
    cout << "Sum of array values: " << sum << endl;


    // linear seaching in array

    // check if 10 is present in array of size 5
    int err[5];
    cout << "Enter value:";
    for(int i=0;i<5;i++){
        cin>>err[i];
    }
    bool flag=0;
    for(int i=0;i<5;i++){
        if(err[i]==10){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout << "10 found" << endl;
    }
    else{
        cout << "10 not found" << endl;
    }


    // array with function
    int frr[5]={2,4,6,8,10};
    int size1=5;
    printArray(frr,size1);


    // linear search using function
    int grr[5]={2,4,6,8,10};
    int size2=5;
    int target=3;
    bool ans=linear_search(grr,size2,target);
    if(ans==1){
        // found
        cout << "target found" << endl;
    }
    else{
        //not found
        cout << "target not found" << endl;
    }


    // function to find no. of 0 and 1 in array
    int hrr[7]={1,0,1,0,1,2,2 };
    int size3=7;
    find_0and1(hrr,size3);


    // signed int range= -2^31 to 2^31-1
    // #include<limits.h>
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;


    // find minimum no. of an array
    int irr[7]={12,43,54,12,-21,44,76};
    int size4=7;
    cout << "Minimum no.: " << find_min(irr,size4) << endl;


    // reverse an array
    int jrr[7]={1,2,3,4,5,6,7};
    int size5=7;
    reverse_array(jrr,size5);

    // extreme print array
    int krr[7]={1,2,3,4,5,6,7};
    int size6=7;
    extremePrint(krr,size6);
    
   }