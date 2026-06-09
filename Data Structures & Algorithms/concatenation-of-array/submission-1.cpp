class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> result (size*2);
        for(int i = 0; i<size*2; i++)
        {
            if(i<size)
            result[i] = nums[i];
            else
            result[i] = nums[i-size];
        }
        return result;
    }
};