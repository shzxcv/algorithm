#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int m = 0;
  for (int x: a) {
    m += x;
  }

  cout << m % 100 << endl;
  return 0;
}