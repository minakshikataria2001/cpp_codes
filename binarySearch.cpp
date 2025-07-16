#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int s){
    int top,mid,bot;
    top=0;bot=n-1;
    while(top<=bot){
     mid = (top+bot)/2;
     if(arr[mid]==s){
        cout<<"found at ";
        return mid+1;
     }
     else if(arr[mid]>s){
        bot = mid-1;
     }
     else{
        top = mid+1;
     }
    }
    return -1;
}
int main(){
    int n=5;
    int arr[n] ={23,34,45,56,67};
    cout<<"enter search element from array";
    int s;cin>>s;
   cout<<binarySearch(arr,n,s);
    return 0;
}