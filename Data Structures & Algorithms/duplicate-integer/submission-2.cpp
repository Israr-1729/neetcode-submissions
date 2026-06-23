class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> isSeen;
        for(int a : nums)
        {
            if(isSeen.find(a)!=isSeen.end())
            return true;
            else
            isSeen.insert(a);
        }
        return false;
    }
};