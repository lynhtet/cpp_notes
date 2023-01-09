#include <iostream>

using namespace std;

int main() {
    // C Style Declaration
    int highest_score = 100;

    // Constructor Style Declaration
    int middle_score (23);

    // C++11 Style Declaration
    int lowest_score {0};

    cout << "The highest socre is: " << highest_score << endl;
    cout << "The middle score is: " << middle_score << endl;
    cout << "The lowest score is: " << lowest_score << endl;

    return 0;
}