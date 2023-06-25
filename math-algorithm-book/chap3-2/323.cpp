#include <iostream>
using namespace std;

long long gcd(long long A, long long B) {
  while (A >= 1 && B >= 1) {
    if (A > B) A = A % B;
    else B = B % A;
  }
  if (A > B) return A;
  return B;
}

long long lcm(long long A, long long B) {
  return (A / gcd(A, B)) * B;
}

int main() {
  long long N;
  cin >> N;

  long long A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long answer = A[0];
  for (int i = 1; i < N; i++) {
    answer = lcm(answer, A[i]);
  }

  cout << answer << endl;
	return 0;
}
