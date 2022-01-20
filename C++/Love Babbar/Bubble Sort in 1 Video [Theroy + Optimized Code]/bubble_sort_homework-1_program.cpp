/* For comparison purposes in an array, two adjacent cells are needed; in an array of 6 elements, you do 5 comparisons only; in an array of 10 elements, 9 comparisons, and so on:

So for 7 elements, just 6 comparisons are done, hence the general rule of n-1 in the outer for loop

About the n-1-i expression, remember that the highest (or lowest, depending on the ordering criterion) value in the bubble sort goes to the last position in the array after the first cycle, so there is no need to compare that value with anything else, therefore the array has to be "shortened" 1 cell at a time, and the value of i in the outer loop is the counter responsible for that in the inner loop:

5 | 3 | 9 | 20 | elements (n) = 4

after first cycle (i = 0), 20 has reached its correct position within the array (using an ascending order), leaving us with an array of 3 elements to do comparisons to; in next cycle, i will be equal to 1, and as n-1 remains the same, we need to substract 1 in that expression to "shorten" the array: n-1-i = 4-1-1 = 2, which is the index of the last element in that new array as well as the quantity of comparisons needed. */

#include<iostream>
using namespace std;

void bubbleSortHomeWork(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t, n, A[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        bubbleSortHomeWork(A,n);
        printArray(A,n);
    }
}