#include<iostream>
using namespace std;
int main(){
    char ch = '1';
    cout<<endl;
    switch(ch){
        case 1: cout<<"First"<<endl;
                cout<<"First Again"<<endl;
                break;
        case '1': cout<<"Character"<<endl;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}