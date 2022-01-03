#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the function call..."<<endl;

    // Update array 1st index element value
    arr[0] = 120;

    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Going back to main function..."<<endl;
}

int main(){
    int arr[3] = {1,2,3};
    update(arr,3);

    // printing the array
    cout<<endl<<"Printing the main function....."<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}