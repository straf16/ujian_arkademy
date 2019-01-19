#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

bool userValid (string user) {
  bool cek = true;
  if (user.length() != 8) {
    cek = false;
  } else {
    for (int i = 0; i < user.length(); i++) {
      if (!islower(user[i]) && user[i] != '_') {
        cek = false;
        break;
      }
    }
  }
  return cek;
}

bool isInside(char x, string &from) {
  for (int i = 0; i < from.length(); ++i)
    if (x == from[i])
      return true;
  return false;
}

bool passValid (string user) {
  static string specialChars = "~!@#$%^&*()_+?:\"{}";
  bool cek = true;
  if (user.length() != 8) {
    cek = false;
  } else {
    for (int i = 0; i < user.length(); i++) {
      if (!isalnum(user[i]) && !isInside(user[i], specialChars)) {
        cek = false;
        break;
      }
    }
  }
  return cek;
}

int main() {

  string username, password;

  cout << "Username: "; cin >> username;
  cout << "Password: "; cin >> password;

  bool usercek = userValid(username);
  bool passcek = passValid(password);

  if (usercek == true) {
    cout << "username valid" << endl;
  } else {
    cout << "username tidak valid" << endl;
  }

  if (passcek == true) {
    cout << "password valid" << endl;
  } else {
    cout << "password tidak valid" << endl;
  }


  return 0;
}
