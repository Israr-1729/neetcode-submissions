class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> result (size*2);
        for(int i = 0; i<size; i++)
        {
            result[i] = nums[i];
        }
        for(int i = size; i<size*2; i++)
        {
            result[i] = nums[i-size];
        }
        return result;
    }
};