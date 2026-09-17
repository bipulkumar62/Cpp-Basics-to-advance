// using if else statements

// converted into pure nested if-else statements

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "enter marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A\n";
    } else {
        if (marks >= 80) {
            cout << "B\n";
        } else {
            cout << "C\n";
        }
    }

    return 0;
}


// using else if() statement

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "enter marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A \n"; 
    } else if (marks >= 80) { // marks < 90 yahan likhne ki zarurat nahi hai
        cout << "B \n";
    } else {
        cout << "C \n";
    }

    return 0;
}

