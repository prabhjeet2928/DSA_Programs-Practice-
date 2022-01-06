#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        else { // arr[mid] > key
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    
    return -1;
}

int main(){

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 9, 11, 14, 16};

    int evenIndex = binarySearch(even,6,12);
    cout<<"Index of 12 is: "<<evenIndex<<endl;

    int noIndex = binarySearch(even,6,20);
    cout<<"Index of 20 is: "<<noIndex<<endl;

    int oddIndex = binarySearch(odd,5,9);
    cout<<"Index of 9 is: "<<oddIndex<<endl;
}