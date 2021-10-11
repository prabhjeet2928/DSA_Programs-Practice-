/* for(initialization; conditions; operations){

}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1; i<=10; ++i){
        cout<<i<<" ";
    }
    cout<<endl;
    int k=1;
    for(;k<=10;++k){
        cout<<k<<" ";
    }
    cout<<endl;
    for(int i=1;i<=10;cout<<i++<<" "){

    }
    cout<<endl;

    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"*";
        }
        cout<<endl;
    }
}