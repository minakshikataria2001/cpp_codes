#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"enter sixe of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"insert the values";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<"your array is ready";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    int maxNo =INT_MIN;
    int minNo = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
         if(arr[i]<minNo){
            minNo= arr[i];
        }
    }
    // for(int i=1;i<n;i++){
    //     if(arr[i]<minNo){
    //         minNo= arr[i];
    //     }
    // }
 cout<<"maxNo "<<maxNo<<endl;
 cout<<"minNo "<<minNo<<endl;
        return 0;
}