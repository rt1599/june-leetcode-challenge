//problem 12 of june leetcode challenge
//insert delete getrandom in O(1)
//Init an empty set.
//RandomizedSet randomSet = new RandomizedSet();

// Inserts 1 to the set. Returns true as 1 was inserted successfully.
//randomSet.insert(1);

// Returns false as 2 does not exist in the set.
//randomSet.remove(2);

// Inserts 2 to the set, returns true. Set now contains [1,2].
//randomSet.insert(2);

// getRandom should return either 1 or 2 randomly.
//randomSet.getRandom();

// Removes 1 from the set, returns true. Set now contains [2].
//randomSet.remove(1);

// 2 was already in the set, so return false.
//randomSet.insert(2);

// Since 2 is the only number in the set, getRandom always return 2.
//randomSet.getRandom();

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int>vec;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
    //vec.push_back(val);
    //return true;
    for(int i=0;i<vec.size();i++)
    {if(vec[i]==val)
        return false;
    }
    vec.push_back(val);
    return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
    for(int i=0;i<vec.size();i++)
    {if(vec[i]==val)
    {vec.erase(vec.begin()+i);
    return true;
    }    
    }
     return false;   
    }
    
    /** Get a random element from the set. */
    int getRandom() {
    //if(vec.size()==0)
      //  return 0;
    return vec[rand() % vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
