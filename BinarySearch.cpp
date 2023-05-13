#include "BinarySearch.h"

// 69
int Solution::mySqrt(int x) {

    if (x == 0) { return x; }

    int low = 1;
    int high = x;

    while (low <= high) {

        // the following line causes overflow as 0 <= x <= 2^31 - 1
        // int mid = int((low + high) / 2);

        int mid = low + (high - low) / 2;
        int sqrt = int(x / mid);

        if (mid == sqrt) {
            return mid;
        } else if (mid < sqrt) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return high;
}

vector<int> Solution::searchRange(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    int first = left;

    left = 0;
    right = nums.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    int second = right;

    if (first > second) {
        return vector<int>{-1, -1};
    } else {
        return vector<int>{first, second};
    }
}