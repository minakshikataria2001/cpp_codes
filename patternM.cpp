#include<iostream>
using namespace std;
int main(){
int n=10;


    for(int i=1;i<=n/3;i++)
    {
        for(int j=1;j<=n;j++)
        {   
          if((i+j)%4==0){
            cout<<"* ";
          }
          else if (i%2==0 && j%4==0)
          {
            cout<<"* ";
          }
          
          else
          {
            cout<<"  ";
          }
        //   if(i==j || j==e)
        //   {
        //  cout<<"*";
        //  if(j==e)
        //  {
        //   e++;
        //  }
        //   }
        //   else
        //   {
        //     cout<<" ";
        //   }
          
        }
        cout<<endl;
    }
return 0;
}
