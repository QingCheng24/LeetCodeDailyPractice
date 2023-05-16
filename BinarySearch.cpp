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

int Solution::search33(vector<int> &nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

//    if (nums[0] > nums[-1]) // may cause error
    if (nums[0] > nums[r]) {
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] >= nums[0]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        int k = l;
        if (nums[0] == target) {
            return 0;
        } else if (nums[0] > target) {
            l = k;
            r = nums.size() - 1;
        } else {
            l = 0;
            r = k - 1;
        }
    }

    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}


int Solution::search33_v2(vector<int> &nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (target == nums[mid]) {
            return mid;
        }

        if (nums[mid] >= nums[l]) {
            if (target >= nums[l] and target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (target > nums[mid] and target <= nums[r]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }

    return -1;
}

bool Solution::search81(vector<int>& nums, int target) {

    int l = 0;
    int r = nums.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] == target)
        {
            return true;
        }

        // key difference. Resolve the confusion of the order
        if (nums[mid] == nums[l] and nums[mid] == nums[r])
        {
            l++;
            r--;
        }
        else
        {
            // = is required to solve [3, 1]-like cases;
            if (nums[mid] >= nums[l])
            {
                if (nums[mid] > target and target >= nums[l])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if (target <= nums[r] and target > nums[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }

    }

    return false;
}