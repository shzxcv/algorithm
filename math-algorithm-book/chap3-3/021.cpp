#include <iostream>
using namespace std;

long long factorial(int n, int count) {
  long long sum = 1;
  long long num = 0;

  while (count > 0) {
    sum *= (n - num);
    num ++;
    count --;
  }
  return sum;
}

int main() {
  int n, r;
  cin >> n >> r;
  cout << factorial(n, r) / factorial(r, r) << endl;
	return 0;
}
