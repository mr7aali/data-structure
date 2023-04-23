#include<iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int value){
    data = value;
    next = NULL;
    }

};

void insertAtTail(Node* &head, int val){
   Node* n = new Node(val);

   Node* temp = head;
   while(temp->next != NULL){
    temp = temp->next;
   }
    temp->next=n;
}


int main(){


return 0;
}
