#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  double A[N];
  double B[N];
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) cin >> B[i];

  double answer = 0;
  for (int i = 0; i < N; i++) {
    answer += A[i] / 3;
    answer += B[i] * 2 / 3;
  }
  cout << answer << endl;
	return 0;
}
