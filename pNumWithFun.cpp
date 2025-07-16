#include<iostream>
using namespace std;
int getPrNum(int num1,int num2) {

   

   bool flag = true;
   for (int i = num1; i <= num2; i++) 
   {flag = true;
      for(int j=2;j<=i/2;j++){
        
           if(i%j==0){            
             
               flag=false;
               break;
             
         
        }  
      }
      if(flag){
         cout<<i<<" ";
      }
   }

   return 0;
}

// main function to call above defined function.
int main () {
    
   
    getPrNum(3,9);
  return 0;
}