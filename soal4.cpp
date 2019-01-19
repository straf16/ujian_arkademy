#include <iostream>
using namespace std;

int kotakHuruf(int a, int b) {
  char s = 97;
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      cout << s << "  ";
      if (s==122) {s=97;}
      else {s++;}
    }
    cout << endl << endl;
  }
}

int main() {

  int x, y;

  cin >> x >> y;

  kotakHuruf(x, y);

  return 0;
}
