#include <iostream>
using namespace std;

int main() {
  long long A, B;
  cin >> A >> B;

  while (A > 0 && B > 0) {
    if (A < B) B = B % A;
    else A = A % B;
  }

  if (B > 0) cout << B << endl;
  else cout << A << endl;

	return 0;
}
