#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int start=n/2;
    int end=n/2;
    bool yes =false;
    bool increase = true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
           if(j>=start && j<=end){
            cout<<"* ";
            yes = true;
           }
           else{
            cout<<"  ";
           }
        }
        if(end>=n-1){
           increase = false;
         }
        if(yes && increase){
            start--;
            end++;
            yes = false;
        }
        else{
            start++;
            end--;
        }
        cout<<endl;
    }

   return 0; 
}