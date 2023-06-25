#include <iostream>
using namespace std;

bool isPrime(int i) {
  if (i < 2) {
    return false;
  }
  for (int j = 2; j * j <= i; j++) {
    if (i % j == 0) return false;
  }
  return true;
}

int main() {
  int age;
  cin >> age;
  if (isPrime(age)) {
    cout << "Your age is prime number" << endl;
  } else {
    cout << "Your age is not prime number" << endl;
  }
	return 0;
}
