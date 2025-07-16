#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter elements in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        }
    }
    cout<<"sorted array";
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}
