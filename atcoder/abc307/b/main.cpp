#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S[N];
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  // N^2
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      string T = S[i] + S[j];

      // check
      // aabaa
      int M = T.length(); // 5
      int point = (M / 2) - 1; // 1
      for (int p = 0; p <= point; p++) {
        if (T[p] != T[M - 1 - p]) {
          break;
        }
        if (p == point) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;

  return 0;
}
