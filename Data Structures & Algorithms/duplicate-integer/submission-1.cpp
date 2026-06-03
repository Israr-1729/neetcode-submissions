class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> isSeen;
        int size = nums.size();
        for(int i = 0; i<size; i++)
        {
            if(isSeen.find(nums[i])!=isSeen.end())
            return true;
            else
            isSeen.insert(nums[i]);
        }
        return false;
    }
};