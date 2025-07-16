#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int s){
    
  for(int i=0;i<n;i++){
      if(arr[i]==s){
        cout<<"found at ";
        return i+1;
        ;
        break;
      }
      
  }
  
  return -1;
}
int main(){
    cout<<"enter size of array";
    int n;cin>>n;
    int arr[n];
    cout<<"insert values in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter search value";
    int s;cin>>s;
    if(linearSearch(arr,n,s)==-1){
      cout<<"not found";
    } 
    else
    {
cout<<linearSearch(arr,n,s);
    }
    
        return 0;
}