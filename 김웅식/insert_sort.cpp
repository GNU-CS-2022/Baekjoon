#include <iostream>
#include <algorithm>

using namespace std;

void insert_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int j = i;
    while(arr[j] > arr[j + 1] && j >= 0) {
      swap(arr[j], arr[j + 1]);
      j--;
    }
  }
}

int main() {
  int a[10] = {8, 2, 6, 1, 7, 9, 4, 6, 2, 0};
  insert_sort(a, sizeof(a) / sizeof(int));
  for (int i = 0; i < 10; i++) {
    printf("%d, ", a[i]);
  }
  printf("\n");
  return 0;
}