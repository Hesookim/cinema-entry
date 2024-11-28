#include <iostream>
using namespace std;

int main() {
     int i,n, s = 0, r;
      cin >> n;
      if(n <= 2000000000){
        for(i=n;i>0; ) {
        r=i%10;
        s=s*10+r;
        i=i/10;
}
}
    if (n==s)
       cout << "Yes";
     else
       cout << "No";

    return 0;
}
