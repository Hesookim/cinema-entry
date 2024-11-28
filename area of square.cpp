#include <iostream>
using namespace std;

int main() {
    float a, b, area;
     cout << "Enter a:";
     cout << "Enter b:";
     cin >> a, b;
    if((a >= 0 ) && (b >= 0 )) {
       area = a * b;
}
    else
      cout << "ERROR";
        cout << "Area of square is " << area;
    return 0;
}
