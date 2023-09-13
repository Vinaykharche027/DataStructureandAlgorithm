// Reverse of a number-Recursion.
// input:123
// print:321

#include <iostream>
using namespace std;

int reverseNumberRecursive(int n) {
    if (n < 10)
        return n;
    int lastDigit = n % 10;
    int remainingDigits = n / 10;
    int reversedNumber = reverseNumberRecursive(remainingDigits);
    return lastDigit * pow(10, int(log10(reversedNumber) + 1)) + reversedNumber;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversedNum = reverseNumberRecursive(num);
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}