#include <iostream>
using namespace std;

int jabatTangan(int a) {
  int t = 0;
  for (int i = a; i > 0; i--) {
    t = t + (i-1);
  }
  return t;
}

int main() {

  int x;
  cin >> x;

  cout << jabatTangan(x);

  return 0;
}
