/*SINGLE NUMBER II
Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,3,2]
Output: 3
Example 2:

Input: [0,1,0,1,0,1,99]
Output: 99
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    if(nums.size()==1)
        return nums[0];
    sort(nums.begin(),nums.end());
    for(int i=0;i<=nums.size()-2;i++)
    {if(nums[i+2]==nums[i])
        i=i+2;
    else
        return nums[i];
    }
    return nums.back();
    }
};
