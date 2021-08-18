/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> pair;
        unordered_map<int, int> complements;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            if(complements.find(num) == complements.end())
            {
                complements[target-num] = i;
            }
            else
            {
                pair = {complements[num], i};
                return pair;
            }
        }
        pair = {-1,-1};
        return pair;
    }
};
