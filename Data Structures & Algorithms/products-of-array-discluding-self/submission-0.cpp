class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int size = nums.size();
        for(int i = 0; i<size; i++)
        {
            long long product = 1;
            for(int j = 0; j<size; j++)
            {
                if(j!=i)
                product = product * nums[j];
            }
            result[i] = product;
        }

        return result;
    }
};
