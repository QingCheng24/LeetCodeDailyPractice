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

void test34(Solution &solution) {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    auto res = solution.searchRange(nums, target);

    cout << endl << endl << "test34: " << endl;
    for (const auto e: res)
        cout << e << ", ";
}

void test33(Solution &solution) {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    auto res = solution.search33(nums, target);

    cout << endl << endl << "test33: " << endl;
    cout << res << endl;

    res = solution.search33(nums, target);

    cout << endl << endl << "test33_v2: " << endl;
    cout << res << endl;
}

void test81(Solution &solution) {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    auto res = solution.search81(nums, target);

    cout << endl << endl << "search81: " << endl;
    cout << res << endl;
}

int main() {
    Solution solution;

//    test64(solution);

//    test34(solution);

//    test33(solution);

    test81(solution);

    return 0;
}