#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

void sort(int *array, int arraySize)
{
    int *end = array + arraySize;
    for (int *i = array; i != end; i++)
    {
        for (int *j = i; j != end; j++)
        {
            if (*i > *j)
            {
                swap(*i, *j);
            };
        };
    };
};
int main() {
    int arraySize;
    cin >> arraySize;
    int *array = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> *(array + i);
    };
    sort(array, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cout << *(array + i);
    };
    return 0;
}