/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
*/

//solution
int removeDuplicates(vector<int>& nums)
{
    size_t i = 0;
    for(size_t j = 1; j < nums.size(); j++)
    {
       if(nums[i] != nums[j])
       {
            ++i;
            nums[i] = nums[j];
       }
    }
    return nums.size() == 0 ? 0 : (i+1);
}

//what you learned?
/* the two pointer approach one faster than the other*/
