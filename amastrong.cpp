#include<iostream>
using namespace std;
int main(){
  //   int n =407;
  //   int temp = n;
  //   int getN =0;
  // while(temp>0){
  //   int a = temp%10;
  //   getN = getN+(a*a*a);
  //   temp = temp/10;
  // }
  // if(getN==n){
  //   cout<<"amastrong number";
  // }
  // else{
  //   cout<<"not amastrong";
  // }

int n=407;
int sum=0;
int temp=n;
int getN = 0;
while(temp>0){
  int a = temp%10;
  sum = sum+a;
  getN = getN+(a*a*a);
  temp = temp/10;
}
if(getN==n){
  cout<<"aramstrong";
  cout<<sum;
}
else{
  cout<<"not";
}
    return 0;
}