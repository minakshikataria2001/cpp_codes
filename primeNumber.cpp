#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // cout<<"enter no";
    int n=8;
    bool yes = false;
    // cin>>n;
    if(n ==1 || n==2){
        cout<<"prime number";
        return 0;
    }
    else{
      for(int i=2;i<=n/2;i++){
        if(n%i==0){
            yes = true;
        }
    }
    }
    if(yes){
        cout<<"not a prime number";
    }
    else{
        cout<<"prime number";
    }
    
    return 0;
}