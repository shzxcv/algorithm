#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  double answer = 0;
  for (int i = N; i > 0; i--) {
    answer += N * 1.0 / i;
  }
  printf("%.12lf\n", answer);
	return 0;
}
