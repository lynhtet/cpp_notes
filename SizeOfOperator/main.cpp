#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Size of Information" << endl;
    cout << "====================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned) << " bytes." << endl;
    cout << "short int: " << sizeof(short) << " bytes." << endl;
    cout << "long int: " << sizeof(long) << " bytes." << endl;
    cout << "long long int: " << sizeof(long long int) << " bytes." << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    cout << "Minimum Value" << endl;
    cout << "==============" << endl;

    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LONG_LONG_MIN << endl;

    cout << "Maximum Value" << endl;
    cout << "==============" << endl;

    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LONG_LONG_MAX << endl;

    // sizeof Operator with variable name
    int age {23};
    cout << "Size of Age: " << sizeof(age) << endl;
    
    float to_get {22.13};
    cout << "Size of to_get: " << sizeof(to_get) << endl;
    
    return 0;
}