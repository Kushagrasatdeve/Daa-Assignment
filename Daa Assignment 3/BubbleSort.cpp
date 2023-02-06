#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if (array[j - 1] > array[j]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-5, 45, -9, 0, 11, 4};
  
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array is:\n";  
  printArray(data, size);
}