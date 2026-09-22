// for loop 

#include <iostream>
using namespace std;

int main ()  {
    int n = 3;

    for(int i=1; i<=n ; i++) {
        cout << i << " ";   //" " = used for space 
    }
    cout << endl;  // endl = end line after for loop.
    return 0;
}

// using while loop

#include <iostream>
using namespace std;

int main () {
    int count = 1;

    while(count <= 5) {               // print numbers 1 to 5
        cout << count << " " << endl;
        count++;
    }
    return 0;
}
