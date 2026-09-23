//  nested loops means loop inside another loop

#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i<=5 ; i++) {  //loop 1 starts
        int m = 5;
        
    for(int j=1 ; j<=m ; j++) {  // loop 2 starts
        cout << "*";
    }
    cout << endl;
    }


    
}
