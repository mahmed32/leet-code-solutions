/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        //make sure that nums2 is always smaller in size than nums1
        if(nums1.size() < nums2.size())
            nums1.swap(nums2);
        
        unordered_map<int, int> map;
        
        for(auto num : nums2)
        {
            if(map.find(num) == map.end())
                map[num] = 1;
            else
                map[num]++;
        }
        
        vector<int> Intersect;
        for(auto num : nums1)
        {
            if(map.find(num) != map.end() && map[num] > 0)
            {
                Intersect.push_back(num);
                map[num]--;
            }
        }
        
        return Intersect;
    }
};
