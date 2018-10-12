#include <iostream>
#include <numeric>

using namespace std;

int main() {
    unsigned int n = 0;
    cin >> n;
    int sum = 0, input;
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> input;
        if ((abs(input) % 72 == 0) ^ (abs(input) % 27 == 0)) sum += input;
    };
    cout << sum;
    return 0;
}