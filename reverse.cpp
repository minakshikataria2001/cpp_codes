#include<iostream>
using namespace std;
int main(){
    int n=1234;
    int Rn = 0;
    while(n>0){
        int a = n%10;
        Rn = Rn*10+a;
        n = n/10;
    }
    cout<<"reverse number is "<<Rn;
    return 0;
}