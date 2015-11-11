#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  while(getline(cin,a)) {
    cout << a << endl;
    string b = a;
    int n_x = 0, n_y = 0;
    for (int i = 0; i < a.size(); i++) {
      if ( b[i] == '(')
        n_x++;
      else if (b[i] == ')')
        n_y++;
      else
        b[i] = ' ';        
    }
    int is_not_done = 1;
    while ( n_x && n_y && is_not_done) {
      is_not_done = 0;
      for (int i = 0; i < b.size(); i++){
        if (b[i] == '(') {
          for (int j = i; j < b.size(); j++) {
            if (b[j] == ')')
              is_not_done = 1;
          }
        }
      }
      for (int i = 0; i < b.size(); i++) {
        if (b[i] =='(') {
          if (i < b.size() - 1) {
            for (int j = i + 1; j < b.size(); j++) {
              if (b[j] == ' ')
                continue;
              else if ( b[j] == '(')
                break;
              else if (b[j] == ')') {
                b[i] = ' ';
                b[j] = ' ';
                n_x--;
                n_y--;
                break;
              }
            }
          }
        }
         }
    }
    for ( int i = 0; i < b.size(); i++) {
      if (b[i] == '(')
        b[i] = '$';
      else if (b[i] == ')')
        b[i] = '?';
    }
    cout << b << endl;
  }
}
