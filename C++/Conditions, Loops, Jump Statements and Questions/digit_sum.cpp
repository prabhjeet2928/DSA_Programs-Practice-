#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int digitSum = 0;
        while(n>0){
            int lastDigit = n%10;
            digitSum = digitSum + lastDigit;
            n = n/10;
        }
        cout<<digitSum<<endl;
    }
}