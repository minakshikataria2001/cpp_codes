#include<iostream>
using namespace std;
int main()
{

int n,i = 2,c = 1;
cout<<"Number:";
cin>>n;

if(n==1 || n==2){
    c=1;
}
else{
    while(i<n){
        if(n%i==0){
            c = c-1;
        }
        i++;
    }
}
if(c==1){
    cout<<"Prime";
}
else{
    cout<<"Not prime";
}



    return 0;
}