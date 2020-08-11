#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;
int main() {
    int m, n;
    int sum = 0;
    int cnt = 0;
    double x, y;
    int a[1000][1000];
    double b[1000];
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i] = sum * 1.0 / n;
        sum = 0;
        for (int i = 1; i <= m - 1; i++) {
            for (int z = i + 1; z <= m; z++) {
                if (b[i] < b[z]) {
                    swap(b[i], b[z]);
                }
            }
            x = b[1];
            y = b[m];
            cnt = 0;
            for (int x = 1; x <= m; x++) {
                if (a[x][j] < x && a[x][j] > y) {
                    cnt++;
                }
            }
        }
        printf("%.1f %.1f %d", y, x, cnt);
        return 0;
    }
}
