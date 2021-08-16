/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        //first: find the first zero in the array
        //make a pointer to it.
        //move a faster pointer to scan the array
        //the faster pointer should stop if there is a non zero elment
        //and make the elment on the slower elment pointed to by it.

        //getting the first zero elment
        int i = 0;
        while(i < nums.size() && nums[i] != 0) ++i;
        int j = i + 1;
        while(j < nums.size())
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                ++i;
            }
            ++j;
        }
        while(i < nums.size())
        {
            nums[i] = 0;
            ++i;
        }
    }
};
