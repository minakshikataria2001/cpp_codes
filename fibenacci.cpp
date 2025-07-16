#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    
    cout<<a<<" "<<b<<" ";
    int i=0;
    while(i<=10){
    
    i=a+b;
    cout<<i<<" ";
    a=b;
    b=i;
   
   
    }
    return 0;
}