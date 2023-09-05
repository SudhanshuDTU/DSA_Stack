#include<iostream>
using namespace std;
bool pairWiseConsecutive(stack<int> s)
{
    if(s.size()%2 != 0){
        //odd size hai agr stack ka 
          s.pop();
      }
   while(s.empty() != true){
      
     int x =  s.top();
     s.pop();
     int y = s.top();
     if(x == y +1 || x==y-1){
         s.pop();
     }
     else{
         return false;
     }
   }
   return true;
}