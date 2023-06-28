#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int dp[N];

  for (int i = 0; i <= N; i++) {
    if (i <= 1) dp[i] = 1;
    else dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[N] << endl;


	return 0;
}
