#include<iostream>
using namespace std;

int main(){
  int i,j;
  int n=1;
  for(i=1;i<=5;i++)
  {
    for(j=0;j<i;j++)
    {
  cout<<n<<" ";
  n +=1;

        // if(j<5-i)

        // {
        //     cout<<" ";
        // }
        // else{
        //     cout<<"*";
        // }
        // if(j==5-i){
        //     cout<<"|";
        // }
        // if(i==0 || i==4 || j==0 || j==3)
        // {
            // else{
            //  cout<<"*";
            // }
         
        // }
        // else{
        //     cout<<" ";
        // }
        
    }
    cout<<"|"<<endl;
  }


    return 0;
}