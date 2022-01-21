#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[3] = "Babbar";
    m[13] = "Kumar";
    m[2] = "Love";
    m.insert({5,"Bheem"});
    cout<<"Before Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(3);
    cout<<"After Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding -13 -> "<<m.count(-13)<<endl;
    auto it = m.find(5);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<endl;
}