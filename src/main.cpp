#include <iostream>

#include "problems/leetcode.cpp"

int main() {
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int* ptr = nums;

    int size = sizeof(nums) / sizeof(nums[0]);

    std::printf("%d", removeDuplicates(ptr, size));

    return 0;
}