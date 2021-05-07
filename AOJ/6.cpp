// A
#include <iostream>
using namespace std;

int main() {
  int num;
  int arr[101];
  int i;
  cin >> num;
  for (i = 0; i < num; i++) cin >> arr[i];
  cout << arr[num - 1];
  for (i = 1; i < num; i++) cout << " " << arr[num - i - 1];
  cout << endl;
  return 0;
}

// B
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i;
  int arr[4][13] = {{}};
  for (i = 0; i < n; i++) {
    char c;
    int num;
    cin >> c >> num;
    switch (c) {
      case 'S':
        arr[0][num - 1] = 1;
        break;
      case 'H':
        arr[1][num - 1] = 1;
        break;
      case 'C':
        arr[2][num - 1] = 1;
        break;
      case 'D':
        arr[3][num - 1] = 1;
        break;
    }
  }
  for (i = 0; i < 52; i++) {
    switch (i / 13) {
      case 0:
        if (arr[0][i % 13] == 0) cout << "S " << i % 13 + 1 << endl;
        break;
      case 1:
        if (arr[1][i % 13] == 0) cout << "H " << i % 13 + 1 << endl;
        break;
      case 2:
        if (arr[2][i % 13] == 0) cout << "C " << i % 13 + 1 << endl;
        break;
      case 3:
        if (arr[3][i % 13] == 0) cout << "D " << i % 13 + 1 << endl;
        break;
    }
  }
  return 0;
}

// C
