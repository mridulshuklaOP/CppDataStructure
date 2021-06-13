#include <iostream>
using namespace std;

int main()
{
 int limit;
 
 cout<<"enter array limit : "<<endl;
 cin>>limit;
 
 cout<<"enter array of "<<limit<<" : "<<endl;
 
 int nums[limit],newnums[limit];
 
 int i,j;
 for(i=0;i<limit;i++)
 {
     cin>>nums[i];
 }
 
 int k;
 cout<<"enter steps : "<<endl;
 cin>>k;
 
 cout<<"entered array : "<<endl;
 for(i=0;i<limit;i++)
 {
     cout<<nums[i]<<endl;;
 }
 
int z=0,n=1;
for(i=0;i<k;i++)
{
   newnums[i]=nums[k+n];
   n++;
}

for(i=k;i<limit;i++)
{
    newnums[i]=nums[z];
    z++;
}

cout<<"new array : "<<endl;
 for(i=0;i<limit;i++)
 {
     cout<<newnums[i]<<endl;
 }
 
}