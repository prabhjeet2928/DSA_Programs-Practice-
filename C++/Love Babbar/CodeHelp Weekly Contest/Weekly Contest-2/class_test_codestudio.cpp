/* Problem Statement:
Ninja recently appeared for a class test. The test was attended by ‘N’ students and the marks of each student was given in an array ‘A’.
Ninja knows that he got a rank ‘K’ among the ‘N’ students but forgot the marks achieved by him. The ranks are given according to the better marks scored by the students.
Tell the marks that must have been scored by Ninja to get a rank ‘K’.

Example :
N = 5
K = 3
A = [ 2, 5, 4, 4, 5 ]
Rank 1 and Rank 2 students get marks = 5.
Rank 3 and Rank 4 students get marks = 4.
Rank 5 student gets marks = 2.
So, Ninja must have scored 4 marks in order to achieve Rank = 3.

Constraints :
1 <= T <= 10
1 <= N <= 10^4
1 <= K <= N
0 <= A[i] <= 100

Time Limit: 1 sec

Sample Input :
2
3
1
3 4 4
4
3
1 1 2 2 

Sample Output :
4
1

Explanation Of Sample Input :
For test case 1 we have, 
To get a Rank 1, Ninja must have scored maximum marks in the class.
Hence, Ninja scored 4 marks.

For test case 2 we have,
Students with marks = 2 will achieve ranks 1 and 2 respectively.
Students with marks = 1 will achieve ranks 3 and 4 respectively.
So, Ninja scored 1 mark. */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int classTest(int n, vector<int> &a, int k){
    sort(a.begin(),a.end());
    return a[n-k];
}

int main(){
    int t,n,k;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int value;
        for(int i=0; i<n; i++){
            cin>>value;
            v.push_back(value);
        }
        int data = classTest(n,v,k);
        cout<<data<<endl;
        v.clear();
    }
}