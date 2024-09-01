#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node {
    public: int data;
    public: Node* next;

public: Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node* Head = nullptr;
void insertAtBegin(int data)
{
  Node* newNode = new Node(data);  // because in cpp we need to explicitly convert the pointer to pointer
  newNode->next = Head;
  Head = newNode;
}


void insertAtLast (int data)
{
   Node* newNode = new Node(data);
   if( Head == NULL) //Checks if the Head is null or not 
   {
       Head = newNode;
       return;  //if its null then it needs to create the new object point to it and return
                //otherwise it will not work fine 
   }
   Node* current = Head;
   while (current->next != NULL )
   {
     current = current->next;
   }
   current->next=newNode ;
}

void addMiddle(int search , int add)
{
    Node* newNode = new Node(add);
    Node* current;
    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
    current = Head;
    
    while (current->next !=NULL)
    {
        if (current->data == search)
        {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }

}


void printList (Node* Head)
{
    while (Head != NULL)
    {
        cout << Head -> data << " ";
        Head = Head->next;
    }
}

int main()
{
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(7);
    insertAtLast(9);
    addMiddle(3 ,8);
    printList(Head);
    return 0;
}
