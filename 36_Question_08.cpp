// Calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumofdigits(int num) {
    int digsum = 0;

    while (num > 0) {
        int lastdig = num % 10;
        num /= 10;
        digsum += lastdig;
    }

    return digsum;
}

int main() {
    int number = 1234044585585;
    cout << "Sum of digits: " << sumofdigits(number) << endl;
    return 0;
}


