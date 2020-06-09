//problem 4 leetcode challenge
//example
// input :["H","a","n","n","a","h"]
// output : ["o","l","l","e","h"]
void reverseString(vector<char>& s) {
    int i=0;
    int j=s.size()-1;
    while(i<j)   
    {if(i!=j)
    {swap(s[i],s[j]);
     i++;
     j--;
    }
    }
    return ;
    }
