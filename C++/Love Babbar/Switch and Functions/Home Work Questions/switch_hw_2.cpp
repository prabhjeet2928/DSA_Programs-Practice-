#include<iostream>
using namespace std;
int main(){
    int num = 1;
    char ch = '2';
    cout<<endl;
    while(true){
        switch(ch){
            case '1': cout<<"First"<<endl;
                      continue; // Continue statement not within a loop

            case '2': switch(num){
                case 1: cout<<"The value of num is: "<<num<<endl;
                        continue; // Continue statement not within a loop
            }
                      continue; // Continue statement not within a loop

            default: cout<<"The default case"<<endl;
        }
    }
    cout<<endl;
}