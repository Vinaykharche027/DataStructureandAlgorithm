// Write a program to count of digit using recursion
// input:123
// out:3

// input:1234
// out:4

#include <iostream>
using namespace std;

int countDigitsRecursive(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigitsRecursive(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digitCount = countDigitsRecursive(num);
    cout << "Number of digits: " << digitCount << endl;
    return 0;
}