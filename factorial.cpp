#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
   return fact;
}

int main(){
    
    int num1;
    
cin>>num1;
  
   cout<<"num1 is "<<factorial(num1);
//   cout<<"num2 is"<<factorial(num2);


    return 0;

}
