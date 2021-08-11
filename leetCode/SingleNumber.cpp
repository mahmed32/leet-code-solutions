/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
*/

//two solutions

//the first solution is the fastes and more readable of all solutions
// using XOR funciton on a number.
//XOR the number with itself gives zero.
//XOR with zero gives the number itself.
//XOR with one toggles
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int res = 0;
        for(auto num : nums)
            res ^= num;
        return res;
    }
};

//the second solution is to use a hash map with items as keys and values as the number they occur
