#include <iostream>
using namespace std;
int main() {
  int a = 1;
  int sum = 0;
  int cnt = 0;
  do {
    cin >> a;
    if (a % 2 == 0) {
      cnt++;
    } else {
      sum += a;
    }
  } while (a != 0);
  cout << cnt - 1 << endl << sum;
  return 0;
}
