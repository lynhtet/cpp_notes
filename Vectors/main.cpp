#include <iostream>
#include <vector>

using namespace std;

int main() {
    //* What is Vector ?
    /**
     * Dynamic Arrays
     * Container in the C++ Standard Template Library
     * An array that grow and shrink in size at execution time
     * Provides similar sematics and syntax as arrays
     * Very Efficient
     * Can provide bound checking
     * Can use lots of cool functions like sort, reverse, find and much more
    */

   //* Declaration Syntax
   /**
    * #include <vector>
   */  
    // vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // vector <int> test_scores {100, 200, 300, 400, 500};
    // vector <int> test_scores2 {3}; // 3 elements all initialize to zero
    // vector <double> hi_temperatures (365, 44.0); // 365 elements initialized to 44.0

    //* Accessing and Modifying Vector Elements
    /**
     * With Array Syntax []
     * With .at() Method
     * 
     * .push_back(element) -> Grow
    */

    // Test Code
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl; // With array syntax
    cout << vowels[1] << endl; // With array syntax

    vector <int> test_scores {100, 33, 22, 23};
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    // cout << test_scores.at(100) << endl;  Error and Exception throw

    cout << "Vector Size(lenght): " << test_scores.size() << endl;

    test_scores.push_back(183);

    for (int i = 0, len = test_scores.size(); i < len; i++) {
        cout << "Loop through array: ";
        cout << test_scores[i] << endl;
    }

    // 2 Dimensional Vector
    vector <vector<int>> movie_ratings {
        {1, 2, 4, 5},
        {1, 2, 4, 5},
        {2, 4, 5, 3},
    };

    cout << movie_ratings.at(0).at(0) << endl;

    for (int i = 0, len = movie_ratings.size(); i < len; i++) {
        for (int j = 0, len = movie_ratings[i].size(); j < len; j++) {
            cout << "Loop through 2 Dim Vecotr: ";
            cout << movie_ratings.at(i).at(j) << endl;
        }
    }

    return 0;
}