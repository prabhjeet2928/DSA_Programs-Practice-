/* Problem Statement:
Given an array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students and the task is to allocate all the books to their students. Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

Example:
Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students).
‘arr = { 10, 20, 30, 40 }’.

All possible way to allocate the ‘4’ books in ‘2’ number of students is -
1. 10 | 20, 30, 40 - sum of all the pages of books which allocated to student-1 is ‘10’, and student-2 is ‘20+ 30+ 40 = 90’ so maximum is ‘max(10, 90)= 90’.
2. 10, 20 | 30, 40 - sum of all the pages of books which allocated to student-1 is ‘10+ 20 = 30’, and student-2 is ‘30+ 40 = 70’ so maximum is ‘max(30, 70)= 70’.
3. 10, 20, 30 | 40 - sum of all the pages of books which allocated to student-1 is ‘10+ 20 +30 = 60’, and student-2 is ‘40’ so maximum is ‘max(60, 40)= 60’.
So possible maximum number of pages which allocated to a single student is { 90, 70, 60 }.
But you have to return a minimum of this so return ‘min(90,70,60) =60’.

Constraints:
1 <= T <= 50
2 <= M <= N <= 10^3
1 <= A[i] <= 10^9
Sum of all A[i] do not more than 10^9.
Where ‘T’ is the total number of test cases, ‘N’ denotes the number of books and ‘M’ denotes the number of students. ‘A[i]’ denotes an element at position ‘i’ in the sequence.

Time limit: 1 second

Sample Input:
2
4 2
12 34 67 90
4 4
5 17 100 11

Sample Output:
113
100

Explanation Of Sample Input:

Test Case 1:
Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students)
‘arr = { 12, 34, 67, 90 }’. And ‘m= 2’.
All possible way to allocate the ‘4’ books in ‘2’ number of students is-

1. 12 | 34, 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’ so maximum is ‘max(12, 191)= 191’.
2. 12, 34 | 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’ so maximum is ‘max(46, 157)= 157’.
3. 12, 34, 67 | 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’ so maximum is ‘max(113, 90)= 113’.
So possible maximum number of pages which allocated to a single student is { 191, 157, 113 } 
But you have to return a minimum of this so return ‘min(191,157, 113) =113’.
Hence answer is ‘113’.

Test Case 2:
‘arr = { 5, 17, 100, 11 }’. And ‘m=4’.
Only one is possible to allocate the ‘4’ books in ‘4’ student is 
5 | 17 | 100 | 11 - maximum is ‘max(5, 17, 100, 11)= 100’.
Hence answer is ‘100’. */

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<n; i++){
        if(pageSum+arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int sum = 0;
    int start = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int end = sum;
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
    int t,n,m,A[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<allocateBooks(A,n,m)<<endl;
    }
}