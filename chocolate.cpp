#include<iostream>
using namespace std;
int main(){
//    int r =15;
   int sum=10;
   int w=10;
   int i=0;
   while(w>0){
    sum+=1;
    i++;
    // cout<<"i "<<i<<endl;
        if(i==3){
        w+=1;
        i=0;
    }
    
    w=w-3;
    

   }   
   cout<<"total "<<sum;
    return 0;
}