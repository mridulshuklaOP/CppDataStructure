
#include <bits/stdc++.h>
using namespace std;


class Node {
	public:
	int data;
	Node *next;
};


void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node *last = *head_ref; 
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}
	
    while (last->next != NULL) {
		last = last->next;  //last variable will work as a temp.
    }                               // variable to traverse till the end of the list.
    last->next = new_node;           
}

void del(Node** head_ref,int pos) {
    Node *temp1=*head_ref;
    for(int i=1;i<=pos-2;i++) {
        temp1=temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
}

void reverseList(Node** head_ref) {
    Node *p,*c,*n;
    p=NULL;
    c=*head_ref;
    while(c!=NULL) {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    *head_ref=p;
}


void printList(Node *node) {
	while (node != NULL) {
		cout<<" "<<node->data;
		node = node->next;
	}
}


int main() {

	Node* head = NULL;
	int size,input_data;
    cout<<"enter size of Linked List : ";
    cin>>size;
    cout<<endl;
    for(int i=1;i<=size;i++) {
        cout<<"enter element "<<i<<" : ";
        cin>>input_data;
        cout<<endl;
        append(&head,input_data);
    }
	cout<<"linked list is : ";
	cout<<endl;
	printList(head);
	
	/*int pos;
	cout<<endl;
	cout<<"enter postion of node to be deleted : ";
	cin>>pos;
	del(&head,pos);
	cout<<endl;*/
	
	reverseList(&head);
	
	cout<<endl;
	cout<<"Reverse linked list is : ";
	cout<<endl;
	printList(head);

}


