#include<iostream>
using namespace std;
int main(){
    // declare
    int number[15];
    cout<<endl<<"Everything is fine.."<<endl<<endl;
    // Accessing the array
    cout<<"Value at 0th position: "<<number[0]<<endl;
    cout<<"Value at 20th position: "<<number[20]<<endl;

    // Intialize Array
    int second[3] = {5,7,11};
    // Accessing as element
    cout<<"Value at 2nd index: "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;
    // Print the array
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;

    // Intialize All Location with 0
    int fourth[10] = {0};
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<10; i++){
        cout<<fourth[i]<<" ";
    }
    cout<<endl;

    // Intialize All Location with 1 (not possible with below statement)
    int fifth[10] = {1};
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<10; i++){
        cout<<fifth[i]<<" ";
    }
    cout<<endl;
}