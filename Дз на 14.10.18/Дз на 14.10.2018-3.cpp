#include <iostream>
#include <numeric>

using namespace std;

int main() {
    unsigned int input, sum = 0, length = 0;
    float average;
    do {
        cin >> input;
        sum = sum +input;
        length++;
    } while (input != 0);
    average = (float)sum/(float)length;
    cout << average;
    return 0;
}