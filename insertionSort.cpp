#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;

      while (j >= 0 && arr[j] > key) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = key;
   }
}

void printArray(int arr[], int n) {
   int i;
   for (i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int n = 5;
   int arr[n] = {12, 11, 13, 5, 6};
   

   cout << "Original array: \n";
   printArray(arr, n);

   insertionSort(arr, n);

   cout << "Sorted array: \n";
   printArray(arr, n);

   return 0;
}
