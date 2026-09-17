// find if a character  lowercase(a-z) or uppercase(A-Z)

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter character :";
    cin >> ch;

    if ( ch >= 'a' && ch <= 'z') {
        cout << "lowercase \n";
    } else {
        cout << "uppercase \n";
    }
    return 0;
}



