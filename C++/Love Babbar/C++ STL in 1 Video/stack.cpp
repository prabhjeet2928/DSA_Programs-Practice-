#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");
    cout<<"Before Pop"<<endl;
    cout<<"Top element -> "<<s.top()<<endl;
    s.pop();
    cout<<"After Pop"<<endl;
    cout<<"Top element -> "<<s.top()<<endl;
    cout<<"Size of Stack -> "<<s.size()<<endl;
    cout<<"Empty or not -> "<<s.empty()<<endl;

}