/* Problem Statement:
You have to print a regular grid pattern of 'R' rows and 'C' columns with a diamond-like shape of size 'S' in each cell of the grid. The diamond shape will contain ‘/’ and ‘\’ characters to represent the borders of the diamond and ‘o’ (small ‘o’ alphabet) to represent the space inside the diamond and ‘e’(small ‘e’ alphabet) to represent the rest of the space of diamond.

For example:
e/\e
/oo\
\oo/
e\/e
The above diagram represents a grid of 1 Row and 1 Column and a diamond of size 2 in its single cell(i.e. each side of the diamond has length 2).

Constraints:
1 <= ‘T’ <= 10
1 <= ‘r’ & ‘c’ <= 100.
1 <= ‘s’ <= 10

Time Limit: 1 sec

Sample Input:
2
3 1 2 
4 4 1

Sample Output:
e/\e
/oo\
\oo/
e\/e
e/\e
/oo\
\oo/
e\/e
e/\e
/oo\
\oo/
e\/e
/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/
/\/\/\/\
\/\/\/\/

Explanation For Sample Input:
For test case: 
    We have to print 3 rows and 1 column of size 2 diamond. */

#include<iostream>
using namespace std;

void printtheDiamond(int r, int c, int s){
    for(int r1=0; r1<r; r1++){
        for(int i=0; i<s; i++){
            for(int c1=0; c1<c; c1++){
                for(int j=i+1; j<s; j++){
                    cout<<"e";
                }
                cout<<"/";
                for(int j=0; j<2*i; j++){
                    cout<<"o";
                }
                cout<<"\\";
                for(int j=i+1; j<s; j++){
                    cout<<"e";
                }
            }
            cout<<endl;
        }
        for(int i=s; i>0; i--){
            for(int c1=0; c1<c; c1++){
                for(int j=0; j<s-i; j++){
                    cout<<"e";
                }
                cout<<"\\";
                for(int j=0; j<2*(i-1); j++){
                    cout<<"o";
                }
                cout<<"/";
                for(int j=0; j<s-i; j++){
                    cout<<"e";
                }
            }
            cout<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    int r,c,n;
    while(t--){
        cin>>r>>c>>n;
        printtheDiamond(r,c,n);
    }
}

