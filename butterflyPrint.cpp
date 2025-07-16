#include<iostream>
using namespace std;
int main(){
    
// cout<<"enter number"<<endl;
int n=10;
// cin>>n;
int start =n/2;
int end =n/2;
if(n%2!=0){
 end++;
}
bool yes = false;
// int k=n-4;

for(int i=1;i<=n;i++){
    for(int j=1;j<n;j++)
    {       if(i >= (n/2)+2  && j>=start && j<= end){
                    cout<<" ";
                    yes = true;
            }
            else if(j <=i || (i+j) >= n){
                cout<<"*";}
            else{
                cout<<" ";
            }
    }  
    if(yes){
        start--;
        end++;
    }
cout<<endl;

}

    return 0;
}