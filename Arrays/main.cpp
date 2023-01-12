#include <iostream>
#include <climits>

using namespace std;

int main() {
    //* Array Notes
    /**
     * Fix Size, After declare, it couldn't change
     * Array elements must be same datatypes
     * There is no array bound checking
     * Good pratise to always initialize the arrrays
    */

    //* Declaration and Initializing
    /**
     * Declaration Syntax(Element_Type array_name [const number of element])
    */
    int my_arr [6] {1, 2, 3, 4, 5, 6};
    int high_score_per_level [10] {3, 5}; // int to 3, 5 and remaining to 0
    int another_array [] {1, 2, 3}; // array size automatically calcuated

    // cin >> vowels[5]; out of bounds

    //* Accessing Array Elements
    cout << my_arr[3] << endl;
    cout << high_score_per_level[1] << endl;
    cout << another_array[2] << endl;

    char vowels[] {'a', 'b', 'c', 'd', 'e'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The third vowel is: " << vowels[2] << endl;

    double hi_temps [] {98.1, 22.1, 23.33, 44.23};
    cout << hi_temps[0] << endl;
    // cin >> hi_temps[0];
    // cout << hi_temps[0] << endl;

    cout << "New Task Here" << endl;
    int test_score[4];
    for (int i = 0; i <= 3; i++) {
        cout << test_score[i] << endl;
    }

    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];

    for (int i = 0; i <= 3; i++) {
        cout << test_score[i] << endl;
    }

    cout << test_score << endl; // Print memory address of array

    //* Multidimensional Array 
    /**
     * Declaration Syntax(Element_Type array_name [dim1_size] [dim2_size])
    */
    int movie_rating[3][4] {
        {0, 2, 4, 6},
        {1, 3, 5, 7},
        {1, 1, 1, 1},
    };
    cout << movie_rating[1][3] << endl;

    return 0;
}