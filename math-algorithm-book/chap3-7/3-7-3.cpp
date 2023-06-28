#include <iostream>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;

  int w[N], v[N];
  for (int i = 0; i < N; i++) cin >> w[i] >> v[i];

  int dp[N][W];
  for (int i = 0; i < W; i++) dp[0][i] = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j < w[i]) dp[i][j] = dp[i-1][j];
      if (j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
    }
  }
	return 0;
}
