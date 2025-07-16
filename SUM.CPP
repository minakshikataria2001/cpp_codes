#include<iostream>
using namespace std;
int main(){

   int a,sum=0,r=0;
   cout<<"enter no";
   cin>>a;
   int temp=a;
   while(a!=0){
    a = temp%10;
    sum =sum+a;
    temp = temp/10;
   }
   cout<<"sum"<<sum;

    return 0;
}
