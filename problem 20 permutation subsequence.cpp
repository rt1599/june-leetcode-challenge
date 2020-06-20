/*The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.
Example 1:

Input: n = 3, k = 3
Output: "213"
*/


class Solution {
public:
    string getPermutation(int n, int k) 
    {
    //vector<string> vec;
    string ans = "";
        
    for(int i=1; i<=n; i++)
        ans+= to_string(i);
        
    while(--k > 0)
    {next_permutation(ans.begin(),ans.end());
    
    }
        return ans;
}
};

