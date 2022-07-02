#include <iostream>

using namespace std;

int main() {
  string name, subject;

  cout << "자신의 이름을 적어주세요: ";
  getline(cin, name);
  cout << "과목을 입력해주세요: ";
  getline(cin, subject);

  cout << name << "님의 자신있는 과목은 " << subject << "입니다";
  return 0;
}