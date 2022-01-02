#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num = 1;
    char ch;
    cin>>ch;
    cout<<endl;
    while(true){
        switch(ch){
            case '1': cout<<"First"<<endl;
                    break;

            case '2': switch(num){
                case 1: cout<<"The value of num is "<<num<<endl;
                        break;
            }
                      break;

            default: cout<<"It is default case"<<endl;
                     exit(1);
        }
    }
    cout<<endl;
}