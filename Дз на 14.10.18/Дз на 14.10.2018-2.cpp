#include <iostream>
#include <numeric>
using namespace std;

int main() {
    unsigned int x, y = 1, n;
    cin >> x >> n;
    if (gcd(x, n) != 1)
    {
      cout << "None\n";  
    } else { 
        for (; x*(++y) % n != 1;);
        cout << y;
    };
    return 0;
}