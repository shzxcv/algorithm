#include <iostream>
using namespace std;

int days = 7;

int main() {
  int N;
  cin >> N;

  int A[N * days];
  for (int i = 0; i < N * days; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = i * days; j < (i + 1) * days; j++) {
      sum += A[j];
    }
    cout << sum << " ";
  }
  cout << endl;

  return 0;
}
