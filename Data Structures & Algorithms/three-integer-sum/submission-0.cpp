class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        if(size<3)
        return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i<size-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            if(nums[i]>0)
            break;
            int begin = i+1;
            int end = size-1;
            while(begin<end)
            {
                if(nums[i]+nums[begin]+nums[end]<0)
                begin++;
                else if(nums[i]+nums[begin]+nums[end]>0)
                end--;
                else
                {
                result.push_back({nums[i], nums[begin], nums[end]});
                begin++;
                end--;
                while (begin < end && nums[begin] == nums[begin - 1])
                begin++;

                while (begin < end && nums[end] == nums[end + 1])
                end--;
                }
            }
        }
        return result;
    }
};
