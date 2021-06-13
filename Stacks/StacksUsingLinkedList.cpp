#include <iostream>
using namespace std;
class Node {
   public:
   int data;
   Node *next;
};
Node* top = NULL;

void push(int new_data) {
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = top;
   top = new_node;
}
void pop() {
   Node *temp;
   temp=top;
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
      delete temp;
   }
}
void display() {
   Node* temp;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      temp = top;
      cout<<"Stack elements are: ";
      while (temp != NULL) {
         cout<< temp->data <<" ";
         temp = temp->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed :"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}