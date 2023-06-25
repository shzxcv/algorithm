#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;

  bool flag = false;

  for (long long i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      if (flag) cout << " ";
      flag = true;
      N /= i;
      cout << i;
    }
  }
  if (N >= 2) {
    if (flag) cout << " ";
    cout << N;
  }
  cout << endl;

	return 0;
}
