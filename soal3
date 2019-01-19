#include <iostream>
using namespace std;

int kotak(int a) {
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= a; j++) {
      if (i%2==1) {
        if (j%2==0) {
          cout << "  ";
        } else {cout << "* ";}
      } else if (i%2==0) {
        if (j%2==0) {
          cout << "* ";
        } else {cout << "  ";}
      }
    }
    cout << endl;
  }
}

int main() {

  int x;

  cin >> x;

  kotak(x);

  return 0;
}
