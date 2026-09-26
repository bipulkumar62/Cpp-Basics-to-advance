
// 1. Multi function calling in main() function.

#include <iostream>
using namespace std;

int printhello() {
    cout << "Helllo\n";
    return 0;
}

int main () {
    printhello();
    printhello();
    printhello();
    printhello();

    cout << "DONE !" << endl;
    return 0;
}



// 2. Store value and Return value in function

// #include <iostream>
// using namespace std;

// int printhello() {
//     cout << "Helllo\n";
//     return 3;
// }

// int main () {
//     int val = printhello(); // function stored in value
//     cout << val << endl;
//     return 0;
// }
                                     



// // 3. Direct function print

// #include <iostream>
// using namespace std;

// int printhello() {
//     cout << "Helllo\n";
//     return 3;
// }

// int main () {
//     cout << printhello() << endl;  // directly cout the function without storing or calling
//     return 0;
// }