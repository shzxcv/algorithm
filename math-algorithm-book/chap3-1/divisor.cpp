#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long N;
  cin >> N;

  vector<long long> arr;

  // O(√N)
  for (long long i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      arr.push_back(i);
      arr.push_back(N / i);
    }
  }
  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(), arr.end()), arr.end());

  for (long long i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
  }
	return 0;
}
