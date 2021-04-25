#include <iostream>
using namespace std;

int main() {
  int i = 1;
  int n;
  cin >> n;
  while (++i <= n) {
    int x = i;
    if (x % 3 == 0) {
      cout << " " << i;
      continue;
    }
    while (x) {
      if (x % 10 == 3) {
        cout << " " << i;
        break;
      }
      x /= 10;
    }
  }
  cout << endl;
  return 0;
}