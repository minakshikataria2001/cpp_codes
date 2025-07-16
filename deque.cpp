#include <iostream>

using namespace std;
class deque{
   int* arr;
    int front;
    int back;
    

     public:
int n=8;
    deque(){
      arr = new int[n];
      front=-1;
      back=-1;
    }
   
    void enqueueFromBack(int x){
      if(back>n-2){
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
void enqueueFromFront(int x){
      if(back>n-2){
         cout<<"overflow"<<endl;
      }
      else
      {
       if(front==-1){
            front++;
            
          }
        else{

        for(int i=back;i>=0;i--){
         
         
         arr[i+1] = arr[i];
         
         
       }
       

        }
          

      
      arr[front] = x; 
      back++;
      }

}

    void dequeueFromFront(){
      if(front==-1  || front>back){
         cout<<"underflow"<<endl;
      }
      else{
         
      
      for(int i=0;i<back;i++){
         arr[i] = arr[i+1];

      }}
      back--;
      
    }

    void dequeueFromback(){
      if(front==-1  || front>back){
         cout<<"underflow"<<endl;
      }
      else{
         back--;
      
      
      
    }
      
    }

    
    
void display(){
    for(int i=0;i<=back;i++){
        cout<<endl<<arr[i]<<" ";
    }
}

};

int main(){
   deque obj;
//    obj.enqueueFromBack(58);
//    obj.enqueueFromBack(56);
//    obj.enqueueFromBack(76);
    //  obj.atTop();
   // obj.enqueue(87);
   // obj.enqueue(87);
//    obj.dequeueFromFront();
   
//    obj.enqueueFromBack(45);
   cout<<endl<<"insertion from front";
   
   
   obj.enqueueFromFront(25);
   obj.enqueueFromFront(75);
   obj.enqueueFromFront(85);
   obj.enqueueFromFront(45);
   obj.display();
   // obj.enqueueFromFront(75);
   // obj.enqueueFromFront(85);
   // obj.enqueueFromFront(45);
   // obj.enqueueFromFront(45);
    cout<<endl<<"insertion from back";
   obj.enqueueFromBack(58);
   obj.enqueueFromBack(56);
   obj.enqueueFromBack(76);
   obj.display();
//    obj.enqueueFromBack(76);
//    obj.enqueueFromBack(76);
// obj.enqueueFromBack(76);
// obj.enqueueFromBack(76);
// obj.enqueueFromBack(76);
// obj.enqueueFromBack(76);

cout<<endl<<"removing one element from front and back:"<<endl;
   obj.dequeueFromFront();
   obj.dequeueFromback();
   // obj.dequeueFromback();
   obj.display();
//    obj.atTop();
       

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
