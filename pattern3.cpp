#include<iostream>
using namespace std;
int main(){
int n=8;
 for(int i=1;i<=n;i++)
 {
    for(int j=n;j>=1;j--){
      if(j<=i){

          cout<<"*"<<" ";
        
        
      }
      else
      cout<<"c ";
    }
    
    for(int k=2;k<=n;k++){
      if(k<=i){
      
     cout<<"*"<<" ";
        
        
      }
      else                     
      cout<<"  ";
    }

    cout<<endl;

 }

    return 0;
}