#include <iostream>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  for (int i = 0; i < N; i++) cin >> A[i];

  int dp[N][S];
  for (int i = 0; i <= S; i++) dp[0][i] = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      if (j > A[i]) dp[i][j] = false;
    }
  }

	return 0;
}
