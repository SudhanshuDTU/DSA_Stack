#include<iostream>
using namespace std;
#include<stack>

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void solve(stack<int>&s, int n,int count){
        //base case
        if(count == n/2){
            s.pop();
            return;
        }
        //rec case
        int x = s.top();
        s.pop();
        solve(s,n,count+1);
        s.push(x);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count=0;
        
       solve(s,sizeOfStack,count);
       
    }
};