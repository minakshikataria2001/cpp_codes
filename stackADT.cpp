#include <iostream>

using namespace std;

class stack{
   int* arr;
   int top;
   int n=5;
   public:
   stack(){
  arr = new int[n];
  top = -1;
   }
   void puch(int x){
      if(top==n-1){
         cout<<"overflow";
      }
      else{
         top++;
         arr[top]=x;
      }
   }
   void pop(){
      int j ;
      if(top==-1){
         cout<<"under flow";
      }
      else{
         int j = arr[top];
         top = top-1;
        cout<<"popped element is "<<j<<endl; 
      }
      
   }
  void atTop(){
   if(top==-1){
      cout<<"underflow"<<endl;
      
   }
   else{
      cout<<"at top "<<arr[top]<<endl;
   }
  }
//   void print(){
//    for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
//    }
//   }
};
int main(){
   stack st;
   st.puch(76);
   st.puch(39);
   st.puch(34);
   st.puch(45);
   st.atTop();
   st.pop();
   st.atTop();
   // st.print();
   // st.pop();
   // st.puch(87);
   // st.puch(54);
   // st.pop();
}

// #define MAX_SIZE 100

// class Stack {
//    private:
//       int top;
//       int a[MAX_SIZE];

//    public:
//       Stack() {
//          top = -1;
//       }
//       bool push(int x);
//       int pop();
//       bool isEmpty();
// };

// bool Stack::push(int x) {
//    if (top >= (MAX_SIZE - 1)) {
//       cout << "Stack Overflow";
//       return false;
//    } else {
//       a[++top] = x;
//       cout << x << " pushed into stack\n";
//       return true;
//    }
// }

// int Stack::pop() {
//    if (top < 0) {
//       cout << "Stack Underflow";
//       exit(EXIT_FAILURE);
//    } else {
//       int x = a[top--];
//       return x;
//    }
// }

// bool Stack::isEmpty() {
//    return (top < 0);
// }

// int main() {
//    Stack s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    cout << s.pop() << " popped from stack\n";
//    cout << s.pop() << " popped from stack\n";
//    cout << s.pop() << " popped from stack\n";
//    return 0;
// }
