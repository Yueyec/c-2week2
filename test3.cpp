#include <iostream>
using namespace std;



int main() {
  int a[100] = {0};
  char b[100];
  cin.getline(b, 100);
  for(int i; b[i] != '\0'; i++) {
    if (b[i] ==b[0] )
      a[i] = 2;
    else 
      a[i] = 3;
  }
  
  while(a[0] != 1) {
    int is_find = 0;
    for ( int i = 0; a[i] != 0; i++) {
      if (a[i] == 2) {
        for ( int j = i + 1; a[j] != 0;j++ ) {
          if ( a[j] == 2)
            break;
          else if ( a[j] == 1)
            continue;
          else if ( a[j] == 3) {
            cout << i << " " << j << endl;
            a[i] = 1;
            a[j] = 1;
            is_find = 1;
            break;
          }
        }
      }
      if (is_find)
        break;
    }
      } 
  return 0;
}
