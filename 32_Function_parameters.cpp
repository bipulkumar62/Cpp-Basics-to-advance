#include <iostream>
using namespace std;

int sum(int a , int b) {   // () - parenthesis  // int a and int b  are parameters here 
    int s = a + b;
    return s;
}

int main () {
    cout << sum(10 , 30) << endl;  // directly pass the sum  in cout
    return 0;
}