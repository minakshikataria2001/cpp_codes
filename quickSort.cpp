#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
   int pivot = arr[high];
   int i = low - 1;

   for (int j = low; j <= high - 1; j++) {
      if (arr[j] < pivot) {
         i++;
         swap(arr[i], arr[j]);
      }
   }
   swap(arr[i + 1], arr[high]);
   return (i + 1);
}

void quickSort(int arr[], int low, int high) {
   if (low < high) {
      int pi = partition(arr, low, high);
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
   }
}

void printArray(int arr[], int size) {
   int i;
   for (i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int n = 5;
   int arr[n] = {10, 7, 8, 9, 1, 5};
     cout<<"unsorted array: \n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
  cout<<endl;
   quickSort(arr, 0, n - 1);
   cout << "Sorted array: \n";
   printArray(arr, n);
   return 0;
}
