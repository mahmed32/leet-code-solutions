/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        return it != nums.end();
    }
};
