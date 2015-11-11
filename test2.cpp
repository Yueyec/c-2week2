#include <iostream>
using namespace std;
int help(int a) {
  if (a == 1)
    cout << "End" << endl;
  else {
    if (a % 2 == 1) {
      int temp;
      temp = a * 3 + 1;
      cout << a << "*3+1=" << temp << endl;
      help(temp);
    }
    else {
      int temp = a / 2;
      cout << a << "/2=" << temp << endl;
      help(temp);
    }
  }
}


int main() {
  int a;
  cin >> a;
  help(a);
  return 0;
}
