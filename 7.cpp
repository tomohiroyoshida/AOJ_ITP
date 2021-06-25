// 7_C
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int r, c;
  int a[500][500];
  int Ans[600][600];
  memset(Ans, 0, sizeof(Ans));
  cin >> r >> c;

  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      cin >> a[i][j];
      Ans[i][j] = a[i][j];
    }
  }

  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      Ans[r + 1][j] += a[i][j];
      Ans[i][c + 1] += a[i][j];
      Ans[r + 1][c + 1] += a[i][j];
    }
  }

  for (int i = 1; i <= r + 1; i++) {
    for (int j = 1; j <= c + 1; j++) {
      if (j > c) {
        cout << Ans[i][j] << endl;
      } else {
        cout << Ans[i][j] << ' ';
      }
    }
  }
  return 0;
}

// D
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  int i, j, k;
  int n, m, l;
  ll arrA[100][100] = {{}};
  ll arrB[100][100] = {{}};
  cin >> n >> m >> l;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) cin >> arrA[i][j];
  }
  for (j = 0; j < m; j++) {
    for (k = 0; k < l; k++) cin >> arrB[j][l];
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      ll ans = 0;
      for (k = 0; k > l; k++) {
        ans += arrA[i][k] * arrB[k][j];
      }
      if (j == 0)
        cout << ans;
      else
        cout << " " << ans;
    }
    cout << endl;
  }
  return 0;
}