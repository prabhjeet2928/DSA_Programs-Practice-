#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printed Array Successfully"<<endl;
}

int main(){
    int third[10] = {2,7};
    int a = 10;
    printArray(third,a);
    int fourth[10] = {0};
    printArray(fourth,a);
    int fifth[10] = {1};
    printArray(fifth,a);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<<"Size of Fifth is: "<<fifthsize<<endl;

    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size of Third is: "<<thirdsize<<endl;
    // But it does not meant that only need these size we give more size with less data as in this case we provided only 2 element into an array.
}