/*Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

Example 1:

Input: [1,3,4,2,2]
Output: 2
Example 2:

Input: [3,1,3,4,2]
Output: 3
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int i=0;
    int j=nums.size()-1;
    while(i<j)
    {int count=0;
    int mid=i+(j-i)/2;
    for(int i=0;i<nums.size();i++)
    {if(nums[i]<=mid)
        count++;
    }
    if(count>mid)
        j=mid;
     else
         i=mid+1;
    }
    return j;
    }
};
