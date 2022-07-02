#include <iostream>

int main() {
  int N;
  std::cin >> N;
  int* array = new int[N];
  for (int i = 0; i < N; i++) {
    std::cin >> array[i];
  }

  int* array2 = new int[N];
  long long int y = 1000000000000000000000;
  int i = 1;
  while (true)
  {
    if (N == 1) {
      y = 0;
      break;
    }
    for (int j = 0; j < N; j++)
      array2[j] = j * i;
    long long int fx = 0;
    for (int j = 0; j < N; j++)
      fx += abs(array[j] - array2[j]);
    if (fx <= y)
      y = fx;
    else
      break;
    i++;
  }
  printf("%lld", y);
  return 0;
}