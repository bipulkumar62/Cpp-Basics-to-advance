// #include <iostream>
// using namespace std;

// int main()  {
//     char grade = 'A';  //output is 65 because A {ASCII VALUE} is 65.
//     int value = grade;  // this is implicit conversion becaues we just tell to int value to store grade.

//     cout<<value<<endl;
//     return 0;

// }

// typecasting  example

#include <iostream>
using namespace std;

int main() {
    double price = 100.99;  // 100.99 ka value 100 hi aayega kyu ki c++ me point count nhi hota int me.
    
    int newprice = (int)price;
    cout << newprice << endl;
    return 0;
}