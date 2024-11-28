#include <iostream>
using namespace std;

int main () {
     signed long int n;
    cin >> n;
    if(abs(n) <= 1000000000) {
         if (n % 2 == 0)
            cout << "Even";
            else
                cout << "Odd";
}
    else
        cout << "ERROR";

    return 0;
}
