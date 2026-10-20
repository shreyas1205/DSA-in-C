/*
 * LeetCode 35: Search Insert Position
 * Difficulty: Easy
 * Topic: Arrays, Binary Search
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 *
 * https://leetcode.com/problems/search-insert-position/
 */

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return left;
}
