#include <vector>

using std::vector;

class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
    }
};

/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/
int removeDuplicates(int* nums, int numsSize) {
    // first element is always counted unique
    int k = 1;

    // start from 1 as first element is always unique
    for (int i = 1; i < numsSize; i++) {
        // as nums sorted in non-decreasing order
        // only need to compare previous element to the next
        // increment k when an unique element is seen
        // as k represent the next slot to be replaced
        // need to check with the previous element at k-1
        // which is the last inserted element
        if (nums[i] != nums[k - 1]) {
            // unique element is seen
            // move it to k
            nums[k] = nums[i];

            // increment k
            k++;
        }

        // if elements are not unique we want the loop to continue
        // and do nothing
    }

    // return k after loop ends
    return k;
}
