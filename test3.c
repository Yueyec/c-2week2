#include <iostream>
using namespace std;



int mian() {
  int a[100] = {0};
  char b[100];
  cin.getline(b, 100);
  for(int i; b[i] != '\n'; i++) {
    if (b[i] ==b[0] )
      a[i] = 2;
    else 
      a[i] = 3;
  }
  while(a[0] != 0) {
    for ( int i = 0; a[i] != 0; i++)
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
          }
        }
      }
  }
  return 0;
}
