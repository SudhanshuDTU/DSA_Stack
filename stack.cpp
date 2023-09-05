#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> v;  // private hai taaki stack beech wale elements ko access na kre
    public:

   void push(int d){
      v.push_back(d);
    }
   
   void pop(){
    v.pop_back();
   }
   int top(){
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
  stack s;
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);

  s.v[]
 
  cout<<s.top();


    return 0;
}