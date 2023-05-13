#include "BinarySearch.h"
#include <vector>
#include <iostream>


void test64(Solution &solution) {
    vector<int> test_cases{0, 1, 2, 3, 4, 8};
    cout << "test64: " << endl;
    for (const int i: test_cases) {
        cout << i << ": " << solution.mySqrt(i) << endl;
    }
}


int main() {
    Solution solution;

    test64(solution);


    return 0;
}