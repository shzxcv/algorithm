#include <iostream>
using namespace std;

int main() {
  // input
  int N, S;
  cin >> N >> S;

  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  //

  // main
  for (int bit = 0; bit < (1 << N); bit++) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if ((bit >> i) & 1) {
        sum += A[i];
      }
    }
    if (sum == S) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
