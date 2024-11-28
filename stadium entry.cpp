#include <iostream>
using namespace std;

int main() {
     unsigned int age, gift, id;
       cout << "Enter your age:";
        cin >> age;
       cout << "Enter Your gift";
        cin >> gift;
       cout << "Enter your id:";
        cin >> id;
    if ((age >= 18)&& ((gift <= 1000000) || (id == 1)))
         cout << "You are registered";
    else
         cout << "You are not registered";
    return 0;
}
