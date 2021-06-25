// A
#include <iostream>
using namespace std;

int main() {
  int h, w, v;
  cin >> h >> w;
  while (h != 0) {
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cout << '#';
      }
      cout << endl;
    }
    cout << endl;
    cin >> h >> w;
  }
  return 0;
}

// B
#include <iostream>
using namespace std;
int main() {
  int h, w;
  cin >> h >> w;
  while (h != 0) {
    int i, j;
    for (i = 0; i < h; i++) {
      for (j = 0; j < w; j++) {
        if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
          cout << "#";
        else
          cout << ".";
      }
      cout << endl;
    }
    cout << endl;
    cin >> h >> w;
  }
  return 0;
}

// C
#include <iostream>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  while (h != 0) {
    int i, j;
    for (i = 0; i < h; i++) {
      for (j = 0; j < w; j++) {
        if (i % 2 != 0 && j % 2 != 0) {
          cout << "#";
        } else if (i % 2 != 0 && j % 2 == 0) {
          cout << ".";
        } else if (i % 2 == 0 && j % 2 != 0) {
          cout << ".";
        } else if (i % 2 == 0 && j % 2 == 0)
          cout << "#";
      }
      cout << endl;
    }
    cout << endl;
    cin >> h >> w;
  }
  return 0;
}

// D
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