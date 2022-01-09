#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(s<e){
        if(arr[m] >= arr[0]){
            s=s+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return e;
}

int main(){
    int arr[5] = {8,10,17,1,3};
    cout<<"Pivot is: "<<getPivot(arr,5)<<endl;
}