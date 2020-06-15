//Given a set of distinct positive integers, find the largest subset such that every pair (Si, Sj) of elements in this subset satisfies:

//Si % Sj = 0 or Sj % Si = 0.

//If there are multiple solutions, return any subset is fine.

//Example 1:

//Input: [1,2,3]
//Output: [1,2] (of course, [1,3] will also be ok)
//Example 2:

//Input: [1,2,4,8]
//Output: [1,2,4,8]	
1
class Solution {
2
public:
3
    vector<int> largestDivisibleSubset(vector<int>& nums) {
4
   sort(nums.begin(), nums.end());
5
        
6
        vector<int> T(nums.size(), 0);
7
        vector<int> parent(nums.size(), 0);
8
        
9
        int m = 0;
10
        int mi = 0;
11
        
12
        / for(int i = 0; i < nums.size(); ++i) // if extending by larger elements
13
        for(int i = nums.size() - 1; i >= 0; --i) // iterate from end to start since it's easier to track the answer index
14
        {
15
            // for(int j = i; j >=0; --j) // if extending by larger elements
16
            for(int j = i; j < nums.size(); ++j)
17
            {
18
                
20
                if(nums[j] % nums[i] == 0 && T[i] < 1 + T[j])
21
                {
22
                   
23
                    T[i] = 1 + T[j];
24
                    parent[i] = j;
25
                    
26
                    if(T[i] > m)
27
                    {
28
                        m = T[i];
29
                        mi = i;
30
                    }
31
                }
32
            }
33
        }
34
        
35
        vector<int> ret;
36
        
37
        for(int i = 0; i < m; ++i)
38
        {
            ret.push_back(nums[mi]);

            mi = parent[mi];

        }

45
        
46
        return ret;
47
    }
48
};
