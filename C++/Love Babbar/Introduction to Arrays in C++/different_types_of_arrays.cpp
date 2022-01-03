#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[3]<<endl;
    // printArray(ch,3);
    for(int i=0; i<5; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[8];

    cout<<"Everything is fine.."<<endl;
}