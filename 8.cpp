// A
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  int i;
  getline(cin, str);
  for (i = 0; i < str.size(); i++) {
    if ('a' <= str[i] && str[i] <= 'z')
      str[i] += 'A' - 'a';
    else if ('A' <= str[i] && str[i] <= 'Z')
      str[i] += 'a' - 'A';
  }
  cout << str << endl;
  return 0;
}