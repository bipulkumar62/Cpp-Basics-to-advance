#include <iostream>
using namespace std;  

int main()
{
    int age = 25;  
    char grade = 'A';
    float height = 5.9;
    bool isStudent = true;
    
    cout << sizeof(age) << endl;    //sizeof operator is used to get the size of a variable in bytes.
    cout << sizeof(grade) << endl;  //sizeof operator is used to get the size of a variable in bytes.
    cout << sizeof(height) << endl;  //sizeof operator is used to get the size of a variable in bytes.
    cout << sizeof(isStudent) << endl;  //sizeof operator is used to get the size of a variable in bytes.
    return 0; 
}    