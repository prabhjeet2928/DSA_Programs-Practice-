#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First Index Element -> "<<d.at(1)<<endl;
    cout<<"Front -> "<<d.front()<<endl;
    cout<<"Back -> "<<d.back()<<endl;
    cout<<"Empty Y/N -> "<<d.empty()<<endl;
    cout<<"Before Erase Size -> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase Size -> "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}