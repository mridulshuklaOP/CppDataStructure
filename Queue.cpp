#include <stdio.h>
#include<iostream>
using namespace std;

int size, front=-1, rear=-1;
int queue[100], data;

void insert(int new_data) {
    if(rear==size-1) {
        cout<<"queue overflow"<<endl;
    }
    else
    if(front==-1) {
        front=0;
    }
    rear++;
    queue[rear]=new_data;
}

void pop() {
    if(front==-1) {
        cout<<"queue underflow"<<endl;
    }
    else
    cout<<queue[front]<<" popped"<<endl;
    front++;
}
 
void display() {
    if(front==-1) {
        cout<<"empty queue!"<<endl;
    }
    else
    for(int i=front;i<=rear;i++) {
        cout<<queue[i]<<" ";
    }
}

int main() {
    
    cout<<"enter size of queue : ";
    cin>>size;
    
    
    for(int i=0;i<size;i++) {
        cout<<"enter element "<<i+1<<" : ";
        cin>>data;
        insert(data);
    }
    cout<<endl;
    cout<<"queue is : ";
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
    cout<<"new queue : ";
    display();
    
    

}
