#include <iostream>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, M;
    cin >> N;
    cin >> M;

    if (N == 1) {
        cout << M << endl;
        return 0;
    }

    if (N == 2) {
        cout << M * (M - 1) % MOD << endl;
        return 0;
    }

    long long result = M;
    long long ways = M - 1;
    for (int i = 3; i <= N; i++) {
        ways = (ways * (M - 1)) % MOD;
        result = (result * ways) % MOD;
    }

    cout << result << endl;

    return 0;
}
