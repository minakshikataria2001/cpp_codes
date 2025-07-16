#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
     if(arr[j]<arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }
    }
}
// cout<<"sorted array";
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
int main(){
    int n=5;
    int arr[5]={3,2,5,6,1};
    cout<<"before sorting";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"after sorting";
    selectionSort(arr,n);

}