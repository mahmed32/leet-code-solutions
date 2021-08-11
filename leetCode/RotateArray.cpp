/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
*/

//solution

class Solution {
public:
    //first attempt
    //
    void rotate(vector<int>& nums, int k)
    {
        k %= nums.size();
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};


