#include <iostream>
using namespace std;

int main()  {

    cout << !(3 > 1) << endl;  // ! - it change true(1) value to false(0)

    cout << ( (3>1) || (3>5) ) << endl;  // it  returns  true even one statement is false because ( || ) 
    // and if dono false hai ye bhi false  aayega.

    cout << ((3>1) && (3>2)) << endl; // if all statement is true its returns true and if one value is false its return false.
    return 0;
}