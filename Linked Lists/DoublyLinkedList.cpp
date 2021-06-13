#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *prev, *next;
};
void printDLL(Node *node) {
    Node *last;
    cout<<"traversal in forward direction : ";
    while(node!=NULL) {
        cout<<node->data<<" ";
        last=node;
        node=node->next;
    }
    cout<<endl;
    cout<<"traversal in reverse direction : ";
    while(last!=NULL) {
        cout<<last->data<<" ";
        last=last->prev;
    }
}

void pushFront(Node** head_ref, int new_data) {
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = (*head_ref);
   new_node->prev = NULL;
   if ((*head_ref) != NULL) {
       (*head_ref)->prev = new_node;
   }
   (*head_ref) = new_node;
}

void pushAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout<<"the given previous node cannot be NULL"<<endl;
    }
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    new_node->prev=prev_node;
    prev_node->next=new_node;
    if(new_node->next!=NULL) {
       new_node->next->prev=new_node; 
    }
}

void pushAppend(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL) {
        new_node->prev=NULL;
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL) {
        last=last->next;
    }
    last->next=new_node;
    new_node->prev=last;
}

void del(Node **head_ref, int pos) {
    Node *temp1=*head_ref;
    for(int i=1;i<=pos-2;i++) {
        temp1=temp1->next;
    }
    Node *temp2=temp1->next;
    temp1->next=temp2->next;
    
    Node *temp3=temp2->next;
    temp3->prev=temp2->prev;
    delete temp2;
}


int main() {
    Node* head = NULL;
	int size,input_data;
    cout<<"enter size of Doubly Linked List : ";
    cin>>size;
    cout<<endl;
    for(int i=1;i<=size;i++) {
        cout<<"enter element "<<i<<" : ";
        cin>>input_data;
        cout<<endl;
        pushAppend(&head,input_data);
    }
	printDLL(head);
	cout<<endl;
	
	int position;
	cout<<endl;
	cout<<"enter postion of node to be deleted : ";
	cin>>position;
	del(&head,position);
	cout<<endl;
    cout<<"Doubly linked list after deletion : "<<endl;
    printDLL(head);
}
