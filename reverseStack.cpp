#include<iostream>
#include<stack>
using namespace std;
void insertatBottom(stack<int> &s,int ele){
    //base case
    if(s.empty()){
        s.push(ele);
        return;
    }
    //rec case
    int t =s.top();
    s.pop();
    insertatBottom(s,ele);
    s.push(t);
}
void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    //rec case
   int ele = s.top();
   s.pop();
    reverseStack(s);
    insertatBottom(s,ele);
    
}
int main(){
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(9);
    reverseStack(s);

    while (!s.empty())
    {
       cout<<s.top()<<" ";
       s.pop();
    }
    
    
    return 0;
}