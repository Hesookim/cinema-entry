#include <iostream>
using namespace std;

int main() {
     unsigned int age;
       cout << "Enter your age:";
       cin >> age;
    if ((age < 30) && (age >= 18))
    {
       cout << "You are a university studant";
    }
    else if (age > 30)
    {
       cout << "You are graduated";
    }
    else if ((age < 18) && (age > 12))
    {
       cout << "You are a high school studant";
    }
    else if ((age <= 12) && (age >= 7))
    {
        cout << "You are a elementary studant";
    }
    else
        cout << "You are under school age";
     return 0;
}
