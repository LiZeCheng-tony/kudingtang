#include <iostream>
using namespace std;
int main() {
  int a;
  int cnt1 = 0;
  int cnt2 = 0;
  int sum1 = 0;
  int sum2 = 0;
  do {
    cin >> a;
    if (a > 0) {
      cnt1++;
      sum1 += a;
    }
    if (a < 0) {
      cnt2++;
      sum2 += a;
    }
  } while (a != 0);
  cout << cnt1 << endl << cnt2 << endl << sum1 << endl << sum2;
}
