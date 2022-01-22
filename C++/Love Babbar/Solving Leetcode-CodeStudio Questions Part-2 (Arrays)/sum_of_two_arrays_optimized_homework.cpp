#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>& v){
    int start = 0;
    int end = v.size() - 1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

vector<int> findArraySumOptimized(vector<int>& a, int n, vector<int>& b, int m){
    int num1 = 0, num2 = 0;
    for(int i=0; i<n; i++){
        num1 = (num1*10) + a[i];
    }
    for(int j=0; j<m; j++){
        num2 = (num2*10) + b[j];
    }
    int sum = num1 + num2;
    vector<int> ans;
    while(sum!=0){
        ans.push_back(sum%10);
        sum = sum/10;
    }
    return reverse(ans);
}

int main(){
    int t,n,m;
    cin>>t;
    vector<int> A;
    vector<int> B;
    while(t--){
        cin>>n>>m;
        int value1;
        for(int i=0; i<n; i++){
            cin>>value1;
            A.push_back(value1);
        }
        int value2;
        for(int j=0; j<m; j++){
            cin>>value2;
            B.push_back(value2);
        }
        vector<int> C = findArraySumOptimized(A,n,B,m);
        for(int i:C){
            cout<<i<<" ";
        }
        A.clear();
        B.clear();
        cout<<endl;
    }
}