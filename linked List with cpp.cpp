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
   if(head == NULL){
    head = n;
    return ;
   }
   Node* temp = head;
   while(temp->next != NULL){
    temp = temp->next;

   }
    temp->next=n;

}

void deletion(Node* &head, int d_data){
    Node* temp = head;

    while(temp!= NULL){

        if(temp->next->data == d_data){

            //cout<<"data ->"<< temp->data  <<endl;
           //cout<<"add ->"<<temp->next<<endl;
           //cout<<"current add ->"<<temp->next->next<<endl;
            temp->next = temp->next->next;
           break;
        }

    temp = temp->next;

    }
  //  Node* todelete = temp->next;
  //  temp->next = temp->next->next;



}


void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data

        //<<"("  << temp->next<<")"

        <<"=>";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

    Node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deletion(head,3);
    deletion(head,2);
    display(head);


return 0;
}
