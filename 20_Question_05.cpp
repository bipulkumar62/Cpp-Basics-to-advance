// check if number is prime or not  

// prime number are those who is divsible by self or 1.

#include <iostream>
using namespace std;

int main ()  {
    int n = 7;
    bool isprime = true;

    for(int i=2; i<=n-1; i++) {
        if(n%i == 0) {   // non prime
            isprime = false;
            break;
        }
    }

    if(isprime == true) {
        cout << "prime no \n";

    } else {
        cout << "non prime no\n";
    }
    return 0;
}