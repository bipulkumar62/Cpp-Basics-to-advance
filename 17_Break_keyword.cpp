#include <iostream>
using namespace std;

int main ()  {
    int n = 39;
    int sum = 0;

    for(int i = 1 ; i<=n ; i++) {
        sum += i;
        if( i == 17 ) {
            break;
        } 
    }
    cout << "sum = " << sum << endl;
    return 0;
}