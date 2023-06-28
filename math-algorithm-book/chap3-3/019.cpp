#include <map>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<long long, long long> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }

  cout << (A[1]) * (A[1] - 1) / 2 + (A[2]) * (A[2] - 1) / 2 + (A[3]) * (A[3] - 1) / 2 << endl;
	return 0;
}
