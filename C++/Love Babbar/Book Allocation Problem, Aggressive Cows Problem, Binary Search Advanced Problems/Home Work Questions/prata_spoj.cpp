/* Problem Statement:
IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P(P<=1000) pratas packed for the function. The stall has L cooks(L<=50) and each cook has a rank R(1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on(he can only cook a complete prata) ( For example if a cook is ranked 2.. he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.

Input:
3
10 4
1 2 3 4
8 1
1
8 8
1 1 1 1 1 1 1 1

Output:
12
36
1 */

#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int cook[],int n,int prata,int time)
{
    int num = 0;
    for(int i=0;i<n;i++)
    {
        int t = 0;
        int next_time = cook[i];
        while(t + next_time<=time)
        {
            num += 1;
            t += next_time;
            next_time += cook[i];
            if(num >= prata){
                return true;
            }
        }
    }
    return false;
}

int cheese_prata(int arr[], int n, int m){
    int start = 0;
    int end = arr[n-1]*m*(m+1)/2;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int t;cin>>t;
    while(t--)
    {
        int prata;
        cin>>prata;
        int cook[51];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>cook[i];
        }
        sort(cook,cook+n);
        cout<<cheese_prata(cook,n,prata)<<endl;
    }
}