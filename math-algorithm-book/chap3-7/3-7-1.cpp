#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int H[N];
  for (int i = 0; i < N; i++) cin >> H[i];

  int dp[N];

  for (int i = 0; i < N; i++) {
    if (i == 0) dp[i] = 0;
    if (i == 1) dp[i] = abs(H[i] - H[i-1]);
    if (i >= 2) {
      int x1 = dp[i-1] + abs(H[i] - H[i-1]);
      int x2 = dp[i-2] + abs(H[i] - H[i-2]);
      if (x1 > x2) dp[i] = x2;
      if (x2 >= x1) dp[i] = x1;
    }
  }

  for (int i = 0; i < N; i++) {
    cout << dp[i] << " ";
  }
  cout << endl;

	return 0;
}
