
#include <stdio.h>
#include<iostream>
using namespace std;

int size, top=-1;
int stack[100], data;

void push(int new_data) {
    if(top>=size-1) {
        cout<<"stack overflow"<<endl;
    }
    top++;
    stack[top]=new_data;
}

void pop() {
    if(top==-1) {
        cout<<"stack underflow"<<endl;
    }
    else
    cout<<stack[top]<<" popped"<<endl;
    top--;
}
 
void display() {
    if(top==-1) {
        cout<<"empty stack!"<<endl;
    }
    else
    for(int i=top;i>=0;i--) {
        cout<<stack[i]<<" ";
    }
}

int main() {
    
    cout<<"enter size of STACKS : ";
    cin>>size;
    
    
    for(int i=0;i<size;i++) {
        cout<<"enter element "<<i+1<<" : ";
        cin>>data;
        push(data);
    }
    cout<<endl;
    cout<<"stack is : ";
    display();
    cout<<endl;
    cout<<"enter 'y' to pop or enter anything to cancel : ";
    char y;
    cin>>y;
    cout<<endl;
    if(y=='y') {
        pop();
    }
    else
    cout<<"not popping.."<<endl;
    cout<<"new stack : ";
    display();
    

}
