#include <iostream>

#include "problems/leetcode.cpp"

using namespace std;

int main() {
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int* ptr = nums;

    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "removeDuplicates: " << removeDuplicates(ptr, size) << endl;

    // vector init
    vector<int> vector = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    // init LeetCode class
    LeetCode* leetCode = new LeetCode();

    cout << "leetCode->removeDuplicates: " << leetCode->removeDuplicates(vector) << endl;

    // delete LeetCode class
    // this free the memory allocated for the class
    delete leetCode;

    cout << "TAFHEEM" << endl;

    return EXIT_SUCCESS;
}