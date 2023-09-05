#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(3);
    s.push(5);
    s.push(7);
    s.pop();  // it will remove 7 from stack
    s.size(); // size is 1 now
    s.top(); // Element at top is 5
    return 0;
}