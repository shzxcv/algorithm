#include <iostream>
using namespace std;

void print(vector<int> v) {
  for (auto i: v) {
    cout << i << ", ";
  }
  cout << endl;
}

int main() {
  int N = 4;
  vector<int> A{4,5,2,7};

  for (int bit = 0; bit < (1 << N); bit++) {
    vector<int> data;
    for (int i = 0; i < N; i++) {
      if ((bit >> i) & 1) {
        data.push_back(A[i]);
      }
    }

    // print
    print(data);
  }

  return 0;
}
