// Create a Program for total number of set bits in two number.


#include<iostream>
using namespace std;
int setBits(int num){
    int count = 0;
    while(num!=0){
        // checking last bit
        if(num&1){
            count = count + 1;
        }
        num = num >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cin>>a>>b;
    int bits = setBits(a)+setBits(b);
    cout<<"Answer is: "<<bits<<endl;
}