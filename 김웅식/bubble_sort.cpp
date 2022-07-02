#include <iostream>
#include <algorithm>

using namespace std;

void bubble_sort(int arr[], int size) {
  for (int i = size; i > 0; i--) {
    for (int j = 0; j < i - 1; j++) {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}

int main() {
  int a[10] = {8, 2, 6, 1, 7, 9, 4, 6, 2, 0};
  bubble_sort(a, sizeof(a) / sizeof(int));
  for (int i = 0; i < 10; i++) {
    printf("%d, ", a[i]);
  }
  printf("\n");
  return 0;
}