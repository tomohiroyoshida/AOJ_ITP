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

// C
// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_C

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int i;
    int ab[26] = {};
    
    while(getline(cin, str)) {
        for(i=0; i<str.size(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') ab[str[i] - 'a']++;
            else if (str[i] >= 'A' && str[i] <= 'Z') ab[str[i] - 'A']++;
        }
    }
    
    for(i=0; i < 26; i++) {
        cout << (char)('a'+i) << " : " << ab[i] << endl;
    }
    return 0;
}

// D
// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_D
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, p;
    cin >> s >> p;
    s=s+s;
    if (s.find(p) != -1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}