#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node{
       public: 
         int data ;
         Node* next;
         Node (int data ){
            this-> data = data;
            next = NULL;
         } 
};

Node* Head = NULL;

void addMiddle (int data , int search)
{
    Node* newNode = new Node(data);
    bool flag = false;
    if(Head == NULL)
    {
        Head = newNode;
        return;
    }
    Node* current = Head;
    while (current -> next !=NULL)
    {
        if(current->data == search){
           newNode->next = current ->next;
           current->next = newNode;
           flag=true;
           return;
        }
        else{
            current = current->next;
        }
       
    }
    if (flag == false)
    {
        current->next = newNode;
    }
}

void printList (Node* Head)
{
    Node *temp = Head;
    while (temp  != NULL)
    {
        cout<< temp->data<< " ";
        temp = temp->next;
    }
}

Node* reverseList (Node* Head)
{
    Node* current = Head;
    Node* prev = NULL;
    Node* temp = NULL;
    if (current->next==NULL || current ==NULL)
    {
        return current;
    }
    while (current!=NULL)
    {
         temp = current->next;
         current->next = prev;
         prev = current;
         current = temp;
    }
    return prev;
}
int main()
{
    addMiddle(3 ,8);
    addMiddle(2 ,3);
    addMiddle(5 ,2);
    addMiddle(1 ,2);
    cout << "actual list" << endl;
    printList(Head);
   Node* temp = reverseList(Head);
   cout << "reverse list" << " ";
    printList(temp);
    return 0;
}
