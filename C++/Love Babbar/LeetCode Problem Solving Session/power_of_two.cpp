#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans = 1;
    int n;
    cin>>n;
    for(int i = 0; i <= 30; i++){
        if(ans == n){
            cout<<true;
        }
        if(ans < INT_MAX/2){
            ans = ans * 2;
        }
    }
    cout<<false;
}