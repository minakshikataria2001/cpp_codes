#include<iostream>
#include<cmath>
using namespace std;
int main(){

int n =8;
int arr[n+1] ={1,2,0,7,2,0,2,2,-1};
int maxN = arr[0];
int i=0;
while(i<n-1){
if(i==0){
    if(arr[i+1]<arr[i]){
        cout<<i<<" is record breaking day "<<endl;
    }
}
else{
    if(maxN<arr[i] && arr[i+1]<arr[i]){
        cout<<i<<" is record breaking day "<<endl;  
  }

}

}
}