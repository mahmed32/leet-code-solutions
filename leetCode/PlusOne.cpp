/*
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        std::vector<int> oneAdded;
        int carr = 1;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            int sum = carr + digits[i];
            oneAdded.push_back(sum%10);
            carr = sum /10;
        }
        if(carr) oneAdded.push_back(carr);
        std::reverse(oneAdded.begin(), oneAdded.end());
        return oneAdded;
    }
};

//note:
/* do not use size_t when iterating from the end because size_t is always positive and 
   the check in for loop will not end
*/
