#include <iostream>

using namespace std;

int main() {
    // Literal Constants

    // Declared Constants (cosnt Keyword)
    const int total_quantity {18};

    // Constant Expression (constexpr Keyword)

    // Enumerated Constant (enum Keyword)

    // Defined Constant (#define Keyword) [No more using in Modern C Plus Plus]
    #define pi 3.14

    cout << "Declared Constant: " << total_quantity << endl;
    cout << "Constant Expression: " << endl;
    cout << "Enumerated Constant: " << endl;
    cout << "Defined Constant: " << pi << endl;

    return 0;
}