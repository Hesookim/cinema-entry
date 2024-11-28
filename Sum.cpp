#include <iostream>
using namespace std;

int main() {
     unsigned int n, sum = 0;
     cin >> n;
     if (1 <= n <= 1000000) {
       for (int i = 1; i <= n; i++)
        sum = sum + i;
       cout << sum;
}
    else
    cout << "ERROR";

    return 0;
}
