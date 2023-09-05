#include<iostream>
#include<stack>
using namespace std;




void MyStack push(int x)
{
    if(top>=1000){
        cout<<"stack overflow";
    }
    else{
    top++;
    arr[top] = x;
        
    }
     
};

//Function to remove an item from top of the stack.
int MyStack pop()
{ 
    if(top>=0){
    int x = arr[top];
    top--;
    return x;
    
   }
else{
    return -1;
}
}