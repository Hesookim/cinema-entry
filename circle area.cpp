#include <iostream>
using namespace std;

int main() {
    float r, area, const float p = 3.14;
    cout << "Enter r:";
    cin >> r;
    if(r <= 0) {
        cout << "ERROR";
}
    else
    area = (p * r * r);
        cout << "Area of circle is " << area;
    return 0;
}
