#include<iostream>
#include<math.h>
using namespace std;

int powerTwo(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(floor(log2(arr[i])) == ceil(log2(arr[i]))){
            count++;
        }
        else{
            ++arr[i];
            if(floor(log2(arr[i])) == ceil(log2(arr[i]))){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Power of Two is: "<<powerTwo(num,size);
}