/*
4 5
1 1 1 0 0
1 0 1 0 1
1 1 1 1 0
0 0 0 1 1
1 1 1 0 1
1 0 1 1 1
1 0 1 0 0
1 0 0 1 1
*/
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  double z;
  int m, n, count = 0;
  cin >> m >> n;
  int b[20][60], x[20][60];
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> b[i][j];
    }
  }
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> x[i][j];
    }
  }
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (b[i][j] == x[i][j])
      {
        count++;
      }
    }
  }
  z = (double)count / (m * n) * 100;
  printf("%.2f", z);
  cout << "%";
}
