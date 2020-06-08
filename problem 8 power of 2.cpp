// Day 8 of june Leetcode challenge

// Problem 8 
// power of 2 integers 

// Example:

//Input: 1
//Output: true 
//Explanation: 2^0 = 1

#include<bits/stdc++.h>
using namespace std;
bool ispoweroftwo(int n)
{if(n<=0)
    {return false;
    }
    return log2(n)-(int)log2(n)==0?true:false;
}
