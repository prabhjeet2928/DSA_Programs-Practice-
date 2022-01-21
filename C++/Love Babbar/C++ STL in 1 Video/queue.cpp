#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<endl<<"Size before pop -> "<<q.size()<<endl;
    cout<<"Before Pop"<<endl;
    cout<<"First element -> "<<q.front()<<endl;
    q.pop();
    cout<<endl<<"Size after pop -> "<<q.size()<<endl;
    cout<<"After Pop"<<endl;
    cout<<"First element -> "<<q.front()<<endl;
}