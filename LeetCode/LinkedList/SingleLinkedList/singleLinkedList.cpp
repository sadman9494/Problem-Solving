#include<iostream>
#include<string>
#include<vector>
using namespace std;

class node
{
   public:
     int data;
     node* next;
     node (int data) : data(data) , next(nullptr){}    
};

/*class LinkedList
{
   node* head;
   public:
   LinkedList() : head(nullptr){}

   void print()
   {
    node* p = head;

    while (p != nullptr)
    {
      cout<< p->data << endl;
      p = p->next;
    }

   }

   void insertDataBegin (int data)
   {
     node* newNode = new  node(data); 
     newNode->next = head;
     head = newNode; 
   }
};*/

node* head = nullptr;

void print (node* val)
{
   node*p = val;

   while (p!=nullptr)
   {
    cout<< p->data<<endl;
    p = p->next;
   } 
}
void insert(int data )
{
node* newNode = new node(data);
newNode->next = head;
head = newNode;

}

void middle (node* val , int data, int newData)
{
  node* p = val;
  node* newNode = new node(newData);
  
  while (p != nullptr)
  {
    
    if(p->data == data)
    {
      newNode->next = p->next;
      p->next = newNode;
      break;
    }
    p = p->next;
  }
  
}
void addingLast(node* val , int data)
{
   node* p = val;
   node* newNode = new node(data);
   while (p != nullptr)
   {
     
    if(p->next == nullptr)
    {
      p->next = newNode;
      break;
    }
    p= p->next;
   }
}

int main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  print(head);
  cout<< "inserting in the middle" << endl;
  middle(head , 3, 5);
  print(head);
  addingLast(head , 8);
  cout<< "inserting in the middle" << endl;
  print(head);
}