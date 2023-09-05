#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;i<x.size();i++){
            if(s.empty()){
                s.push(x[i]);
            }
            else if((s.top() == '(' && x[i] == ')') || (s.top() == '{' && x[i] == '}')
            || (s.top() == '[' && x[i] == ']') ){
                s.pop();
            }
            else{
             s.push(x[i]);   
            }
        }
        
        if(s.empty()){
            return true;
        }
        return false;
    }

};