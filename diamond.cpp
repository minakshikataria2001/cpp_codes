#include<iostream>
using namespace std;
int main(){

int i,j,x,y,n;
cout<<"enter:\n";
cin>>n;
int r;
if(n%2!=0){
r=(n+1)/2;
x=(n+1)/2;
y=(n+1)/2;
}

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j==x||j==y){

            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<"x"<<x<<"y"<<y<<endl;
    if(i<r){
        
        x--;y++;
    }
    else{
        x++;y--;
    }
    cout<<endl;
}
    return 0;
}