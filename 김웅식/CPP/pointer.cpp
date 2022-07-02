#include <iostream>

using namespace std;

int main() {
  int* ptr_int = new int;
  *ptr_int = 100;

  cout << "int형 숫자의 값은" << *ptr_int << "입니다.";
  return 0;
}