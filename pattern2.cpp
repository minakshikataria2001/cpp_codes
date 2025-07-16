#include<iostream>
using namespace std;

int main(){
  int n=5;
  // int count =1;
  for(int i=1;i<=n;i++){
    // if(i%2==0)
    //   {
    //   count=0;
    //   }
    //   else{
    //     count=1;
    //   }
      
    for(int j=1;j<=i;j++)
    {
      if((i+j)%2==0)
      {
      cout<<"1";
      }
      else{
        cout<<"0";
      }
    //   if(i%2==0)
    //   {
    //  if(i%2==0 && j%2==0)
    //   {
    //     cout<<"1";
    //   }
    //   else{
    //     cout<<"0";
    //   }
    //   }
    //   else
    //   {
    //     if(i%2!=0 && j%2!=0)
    //   {
    //     cout<<"1";
    //   }
    //   else{
    //     cout<<"0";
    //   }
    //   }
      
      
      //  cout<<count;
      //  if(count==0)
      //  {
      //   count=1;
      //  }       
      //  else
      //  {
      //   count=0;
      //  }
    }
    cout<<endl;
  }


    return 0;
}