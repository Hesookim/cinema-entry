#include <iostream>
using namespace std;

int main() {
     unsigned int n;
      cin >> n;
      if(n <= 1000000) {
        for (int i = 0; i < n; i++)
            if ((i % 3 == 0) && (i % 5 != 0))
        cout << i << " ";
}
      else
      cout << "ERROR";

      return 0;
}
