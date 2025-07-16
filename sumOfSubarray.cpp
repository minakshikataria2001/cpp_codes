#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=1;
    int sum=0;
    // int arr[n];
    int arr[n] ={1,2,2};
    for(int i=0;i<n;i++){
        sum = arr[i];
        cout<<count<<" subarray sum "<<sum<<endl;
        
        for(int j=i+1;j<n;j++){
        sum = sum+arr[j];
        count++;
        cout<<count<<" subarray sum "<<sum<<endl;           
        }
        sum=0;
    }
    return 0;
}