#include<iostream>
using namespace std;
// class MyClass{
//     private:
//     int x;
//     public:
//     MyClass(int x){
//         this->x = x+1;
//         cout<<"value of x is "<<this->x;
//      }
// };
int main(){
    int a ,b,c;
    a=10;
    b=a++;
    c=++a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    return 0;
}