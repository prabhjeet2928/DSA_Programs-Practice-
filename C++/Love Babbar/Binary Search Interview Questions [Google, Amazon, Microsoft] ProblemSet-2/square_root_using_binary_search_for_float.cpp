#include<iostream>
using namespace std;

int mysqrt(int n){
    long long int ans = -1;
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;
    while(start <= end){
        long long square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecision(int n, int precisionCount, int temp_Sol){
    double ans = temp_Sol;
    double factor = 1;
    for(int i=0; i<precisionCount; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n,t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int tempSol = mysqrt(n);
        cout<<"Answer is: "<<morePrecision(n,3,tempSol)<<endl;
    }
}