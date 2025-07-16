#include <iostream>

using namespace std;
class queue{
   int* arr;
    int front;
    int back;
    int n=5;
     public:
    queue(){
      arr = new int[5];
      front=-1;
      back=-1;
    }
   
    void enqueue(int x){
      if(back==n-1){
         cout<<"overflow"<<endl;
      }
      else{
          back++;
          arr[back]= x;
          if(front==-1){
            front++;
          }
      }
    }
    void dequeue(){
      if(front==-1  || front>back){
         cout<<"underflow"<<endl;
      }
      else{
         
      
      for(int i=0;i<back;i++){
         arr[i] = arr[i+1];

      }}
      back--;
    }
    void atTop(){
   if(front==-1){
      cout<<"underflow"<<endl;
      
   }
   else{
      cout<<"at top "<<arr[front]<<endl;
   }
  }
    
};
int main(){
   queue obj;
   obj.enqueue(58);
   obj.enqueue(56);
   obj.enqueue(76);
     obj.atTop();
   // obj.enqueue(87);
   // obj.enqueue(87);
   obj.dequeue();
   
   obj.enqueue(45);
   obj.atTop();
       

}
// #define MAX_SIZE 100

// class Queue {
//    private:
//       int front, rear;
//       int a[MAX_SIZE];

//    public:
//       Queue() {
//          front = rear = -1;
//       }
//       bool enqueue(int x);
//       int dequeue();
//       bool isEmpty();
// };

// bool Queue::enqueue(int x) {
//    if (rear >= (MAX_SIZE - 1)) {
//       cout << "Queue Overflow\n";
//       return false;
//    } else {
//       a[++rear] = x;
//       cout << x << " enqueued to queue\n";
//       return true;
//    }
// }

// int Queue::dequeue() {
//    if (front == rear) {
//       cout << "Queue Underflow\n";
//       exit(EXIT_FAILURE);
//    } else {
//       int x = a[front++];
//       return x;
//    }
// }

// bool Queue::isEmpty() {
//    return (front == rear);
// }

// int main() {
//    Queue q;
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//    cout << q.dequeue() << " dequeued from queue\n";
//    cout << q.dequeue() << " dequeued from queue\n";
//    cout << q.dequeue() << " dequeued from queue\n";
//    return 0;
// }
