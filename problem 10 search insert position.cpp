//problem 10 of leetcode
//Input: [1,3,5,6], 5
//Output: 2
int searchInsert(vector<int>& nums, int target) {
    return binary_search(nums,target);
    }
int binary_search(vector<int>nums, int target)
{int start=0;
 int end=nums.size();
 int mid;
 while(start<end)
 {mid=(start+end)/2;
if(nums[mid]>=target)
     end=mid;
 else
 {start=mid+1;
}
 }
return start;    
}
