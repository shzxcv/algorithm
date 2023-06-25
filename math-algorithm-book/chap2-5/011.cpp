#include <iostream>
using namespace std;

bool isPrime(int x) {
  for (int i = 2; i <= x -1; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;

  for (int i = 2; i <= N; i++) {
    if (isPrime(i) == true) {
      if (i >= 3) cout << " ";
      cout << i;
    }
  }
  cout << endl;
  return 0;
}
