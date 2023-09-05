#include<iostream>
using namespace std;
// template <typename U>

class node
{
public:
  int data;
  node *nextptr;
  node(int d)
  {
    data = d;
    nextptr = NULL;
  }
};
void deleteatFront(node*&head){
  //if ll is empty
  if(head==NULL){
    return;
  }
  // ll  have only one node
  else if(head->nextptr == NULL){
    delete head;
    head = NULL;
   
  }
  // ll  have multiple nodes
  else{
      node *temp = head->nextptr;
      delete head;
      head=temp;
  }
 }
int lengthofll(node*head){
  int count =0;
  node*temp = head;
  while(temp != NULL){
    count++;
    temp = temp->nextptr;
  }
  return count;
}
void insertatHead(node *&head, int data)
{
  // if ll is empty
  if (head == NULL)
  {
    node *p = new node(data);
    head = p;
  }

  else
  {
    node *p = new node(data);
    p->nextptr = head;
    head = p;
  }
}

class stack
{
  node *head;
  int length;

public:
  stack()
  {
    head = NULL;
    length = 0;
  }

  void push(int d)
  {
    insertatHead(head,d);
  }

  void pop()
  {
    deleteatFront(head);
  }
  int top()
  {
    return head->data;
  }

  int size()
  {
   return lengthofll(head);
  }
  bool empty()
  {
    if (head==NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{
  stack s; 
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}