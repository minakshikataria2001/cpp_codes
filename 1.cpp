#include<iostream>
using namespace std;

int main() {
   int i,j,n,x,y;
   cout<<"enter:-";
   cin>>n;
   
  x= n/2;
   y= n/2;
   for(i=0;i<n;i++)
   {
    cout<<"i="<<i<<" ";
       for(j=0;j<n;j++)
       {
           if(j==x||j==y)
           {
               cout<<"*";
               
           }
           else
           {
               cout<<" ";
           }
       }
  
  cout<<"x="<<x<<" y"<<y;
       if(i<=n/2)
       {
        x--;
        y++;
       }
       else{
        x++;
        y--;
       }
      
       cout<<endl;
   }
}