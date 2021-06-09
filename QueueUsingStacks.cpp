#include <bits/stdc++.h>
using namespace std;
 
struct Queue {
    stack<int> s1, s2;
 
    void display() {
        stack<int> stemp=s1;
        cout<<"Queue is : ";
        while (!stemp.empty()) {
        cout << ' ' << stemp.top();
        stemp.pop();
        }
    }
    
    void enQueue(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
 
    void deQueue() {
        if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }
        cout<<s1.top()<<" popped"<<endl;;
        s1.pop();
    }
};
 
int main()
{
   Queue q;
   int ch, val;
   cout<<"1) Push in queue"<<endl;
   cout<<"2) Pop from queue"<<endl;
   cout<<"3) Display queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            q.enQueue(val);
            break;
         }
         case 2: {
            q.deQueue();
            break;
         }
         case 3: {
            q.display();
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