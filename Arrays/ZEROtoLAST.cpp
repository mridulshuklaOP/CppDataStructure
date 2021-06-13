#include <iostream>
using namespace std;

int main()
{
 int nums[5],i,z = 0;
 
 cout<<"enter array of 5 : "<<endl;
 for(i=0;i<5;i++)
 {
     cin>>nums[i];
 }
 
 cout<<"entered array : "<<endl;
 for(i=0;i<5;i++)
 {
     cout<<nums[i]<<endl;;
 }
 
 for (int i = 0; i < 5; i++) 
 {
    if (nums[i] != 0) 
    {
    
    nums[z] = nums[i];
    z++;
    }
}
 for (int i = z; i < 5; i++) 
{
    nums[i] = 0;
}


 cout<<"new array : "<<endl;
 for(i=0;i<5;i++)
 {
     cout<<nums[i]<<endl;;
 }
}