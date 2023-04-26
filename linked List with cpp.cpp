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

void insertatHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head=n;
}

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
    if(head->data== d_data){//if we delete the head element
           Node* DeleteHead = head;
            head = temp->next;
           delete DeleteHead;
            return;
    }

    while(temp!= NULL){

        if(temp->next->data == d_data){ //searching the key value for delete
           //  cout<<"deleting add: "<<temp->next->next<<endl;
                Node* toDelete = temp->next;
              temp->next = temp->next->next;
              delete toDelete;

             return ;
        }

    temp = temp->next;

     if(temp->next == NULL){
       return;
    }

    }
}


void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data

      //  <<"{ "  << temp->next<<" }"

        <<"=>";
        temp = temp->next;
    }
    cout<<"NULL";
}

bool useSearch(Node* head, int key){
    Node* temp = head;

    while(temp!= NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;
    int choice,value;
    bool Exit = false;


    cout<<"\n\t--------{ Welcome to Linked List }----------"<<endl;
    cout<<"\n     Press  given key....."<<endl;
   while(!Exit){


    cout<<"\n  1.POP"<<endl;
    cout<<"\n  2.Delete"<<endl;
    cout<<"\n  3.Display"<<endl;
    cout<<"\n  -1.Exit"<<endl;
    cout<<"\n Which function do you want use?: ";

    cin>>choice;
    switch(choice){
    case 1:
        cout<<"\nLinked List { ";
        display(head) ;
        cout<<" } \n\nEnter the Value : ";
        cin>>value;
        insertAtTail(head,value);
        cout<<"\nLinked List { ";
        display(head) ;
        cout<<"}";
        break ;

    case 2:
        cout<<"\nLinked List { ";
        display(head) ;
        cout<<"}\n\nDeleting value : ";
        cin>>value;
        deletion(head,value);
        cout<<"\nLinked List { ";
        display(head) ;
        cout<<"}";
        break;

    case 3:
        cout<<"-------------------------------------------\n\n"<<endl;
        display(head);
        cout<<"\n\n-------------------------------------------"<<endl;
        break;
    case -1:
        Exit = true;
        break;

    }

   }




return 0;
}
