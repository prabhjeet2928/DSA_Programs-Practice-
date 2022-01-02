// Number of 1 Bits

/*
Input -> n = 00000000000000000000000000001011
Output -> 3
Explanation -> The input binary value 00000000000000000000000000001011 has a total of three '1' bits
*/

#include<iostream>
using namespace std;
int main(){
    uint32_t n;
    cin>>n;
    int count = 0;
    while(n!=0){
        // checking last bit
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    cout<<count;
}