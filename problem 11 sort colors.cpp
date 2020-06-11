//problem 11 leetcode challenge
//input:Input: [2,0,2,1,1,0]
//Output: [0,0,1,1,2,2]
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int count[3]={0};
    for(auto i:nums)
        count[i]++;
    int k=0;
    for(int i=0;i<3;i++)
    {while(count[i]>0)
    {nums[k++]=i;
     count[i]--;
    }
    }
    return;
    }
};
