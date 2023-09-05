#include<iostream>
#include<vector>
using namespace std;
template<typename U>

class stack{
    vector<U> v;  // U type ka vector hai
    public:

   void push(U d){
      v.push_back(d);
    }
   
   void pop(){
    v.pop_back();
   }
   U top(){
   return v[v.size() - 1];
   }

   int size(){
    return v.size();
   }
   bool empty(){
    if(v.empty()){
        return true;
    } 
    else{
        return false;
    }
   }
};

int main(){
  stack<char> s;  // stack<dataType> s 
  s.push('a');
  s.push('b');
  s.push('c');
  s.push('d');

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }




    return 0;
}