#include<iostream>
#include<cmath>
using namespace std;
bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a == x){
      b=y;c=z;
    } 
    else if(a==y){
        b=x;c=z;
    }
    else{
        b=x;c=y;
    }
    if((a*a)==((b*b)+(c*c)))
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"enter three numbers";
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythagorian triplet";
    }
    else{
        cout<<"not pythagorian triplet";
    }
}