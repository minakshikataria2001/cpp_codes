#include<iostream>
using namespace std;

int factorial(int num1){
        int fact = 1;
        while(num1>0){
            fact= fact*num1;
            num1--; }
        return fact;    
         }
int main()
{
    cout<<"enter two number";
    int n,r;
    cin>>n>>r;
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
cout<<"ans is"<<ans;
        // cout<<"enter number";
        // int n;
        // cin>>n;
        // cout<<"factorial is "<<factorial(n);
    //    return 0; 
}