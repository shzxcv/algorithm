#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long sum = 1;
  for (int i = 1; i <= N; i++) {
    sum = sum * i;
  }

  cout << sum << endl;
  return 0;
}
