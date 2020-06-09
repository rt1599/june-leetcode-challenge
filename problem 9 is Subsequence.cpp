// Day 9 of June LeetCode Challenge

// Problem 9

// Is Subsequence

// Given a string s and a string t, check if s is subsequence of t.

// A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters 
// without disturbing the relative positions of the remaining characters. 
// (ie, "ace" is a subsequence of "abcde" while "aec" is not).

// Input: s = "abc", t = "ahbgdc"
// Output: true
 bool isSubsequence(string s, string t) {
    int m=t.length()-1;
    int n=s.length()-1;
    while(m>=0 && n>=0)
    {if(t[m]==s[n])
    {m=m-1;
        n=n-1;
    }
     else
         m=m-1;
    }
    return n<0;
    }
