#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
 getline(cin, a);
  char *s = NULL, *e = NULL;
  for (int i = 0; i < a.size(); i++) {

    if ( a[i] == ' ')
      cout  <<' ';
    if ( i == 0 && a[i] >='!')
      s = &a[i];
    else if ( (a[i - 1] == ' ' || a[i - 1] == '\t') && a[i] >= '!')
      s = &a[i];
    if ( i == a.size() - 1 && a[i] >='!')
      e = &a[i];
    else if ( a[i] >='!' && a[i + 1] == ' ')
      e = &a[i];
    if ( s && e) {
      for (int  i = 0; i <= e - s; i++) {
        cout << *(e - i);
      }
      s = NULL;
      e = NULL;
    }
  }
  cout << endl;
}
