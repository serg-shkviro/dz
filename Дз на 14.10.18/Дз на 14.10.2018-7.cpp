#include <iostream>

using namespace std;

int min(int a, int b)
{
    return a > b ? b : a;
}

int minSum(int *array, int arraySize)
{
    int *end = array + arraySize;
    int result = 2147483647;
    //cout << *end << endl;
    for (int *i = array; i != end - 4; i++)
    {
        for (int *j = i + 4; j != end; j++)
        {
            result = min(result, *i + *j);
        };
    };
    return result;
}

int main() {
    int arraySize;
    cin >> arraySize;
    int *array = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> *(array + i);
    };
    cout << minSum(array, arraySize);
    return 0;
}