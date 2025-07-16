#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[n] = {10,2,7,4,6,8,10,9};
    int ansLen=2;
    int currLen=2;
    int start = 0;
    int pd = abs(arr[0]-arr[1]);
    
    int cd;
    for(int i=2;i<n;i++){
     cd = arr[i]-arr[i-1];
     if(cd==pd){
        currLen++;
        if(ansLen<currLen)
        ansLen=currLen; 
        continue;
     }
     else{
        start = i;
        pd=cd;
        currLen = 2;
     }
    }

cout<<"longest length is "<<ansLen;
}